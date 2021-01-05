#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int size;
        cin>>size;
        vector<int> arr(size);
        for(int i=0;i<arr.size();i++){
            cin>>arr[i];
        }
        // vector<int> p(size,0);
        int count=0;
        for(int i=arr.size()-1;i>=0;i--){
            count=max(count,arr[i]);
            // for(int j=0;j<count;j++){
            //     p[j]++;
            // }
        }
        cout<<arr.size()-count<<endl;
        // int ans=0;
        // for(int i=0;i<p.size();i++){
        //     if(p[i]==0) ans++;
        // }
        // cout<<ans <<endl;
    }
}