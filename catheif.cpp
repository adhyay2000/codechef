#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,n,k;
        cin>>x>>y>>k>>n;
        int distance = max(x,y)-min(x,y);
        if(distance%k==0){
            if((distance/k)%2==0) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
}