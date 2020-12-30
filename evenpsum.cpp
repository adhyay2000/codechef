#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        long long ans=0;
        ans += floorl(a/2.0)*floorl(b/2.0);
        ans += ceill(a/2.0)*ceill(b/2.0);
        cout <<ans << endl;
    }
}