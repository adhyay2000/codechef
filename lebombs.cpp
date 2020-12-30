#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                if(i-1>=0 && s[i-1]!='1') s[i-1]='2';
                if(i+1<n && s[i+1]!='1') s[i+1]='2';
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0') ans++;
        }
        cout << ans << endl;
    }
}