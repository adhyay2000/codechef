// CONCEPTS USED:
// BINARY INDEX TREE,sorting,coordinate compression
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    ll s[n];
    ll e[n];
    for(int i=0;i<n;i++){
        int a,b;
        cin >>a >>b;
        s[i]=a;
        e[i]=b;
    }
    int q;
    cin >> q;
    for(int i=0;i<q;i++){
        int k;
        cin >> k;
        vector<bool> brr(n,false);
        // vector<int> arr;
        for(int i=0;i<k;i++){
            ll tmp;
            cin >> tmp;
            // arr.push_back(tmp);
            for(int i=0;i<n;i++){
                if(s[i]<=tmp && e[i]>=tmp) brr[i]=true;
            }
        }
        int count=0;
        for(int i=0;i<n;i++){
            if(brr[i]) count++;
        } 
        cout << count << endl;
    }
}