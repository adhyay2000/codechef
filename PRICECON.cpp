#include <bits/stdc++.h>
using namespace std;
void solve(vector<int> arr,int k){
    int loss=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>k) loss+=arr[i]-k;
    }    
    cout << loss << endl;
}
int main(){
    cin.tie(NULL);
    cin.sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<int> tmp;
        for(int i=0;i<n;i++){
            int a;
            cin >> a;
            tmp.push_back(a);
        }
        solve(tmp,k);
    }
}