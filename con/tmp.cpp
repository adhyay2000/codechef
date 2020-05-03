#include<bits/stdc++.h>
#define boost ios_base ::sync_with_stdio(0); cin.tie(0);
using namespace std;
int main(){
    boost;
    int test,j=1;
    cin >> test;
    vector<int> arr;
    while(test--){
        long long n,b;
        cin >> n >> b;
        arr.clear();
        for(int i=0;i<n;i++){
           int tmp;
           cin >> tmp;
           arr.push_back(tmp);
        }
        sort(arr.begin(),arr.end());
        long long ans=0;
        for(int i=0;i<n;i++){
            if(b>=arr[i]){
                b-=arr[i];
                ans++;
            }
        }
        cout << "Case #" << j << ": " << ans << endl;
        j++;
    }
}
