#include<bits/stdc++.h>
#define MOD 10000009
using namespace std;
int solve(string s){
    for(int i=0;i<s.size();i++){
        if(s[i]!='?'){
            if(s[s.size()-1-i]=='?') s[s.size()-1-i]=s[i];
        }
    }
    for(int i=0;i<s.size();i++){
        if(s[i]!=s[s.size()-1-i]) return 0;
    }
    int ans=1;
    for(int i=0;i<(s.size()+1)/2;i++){
        if(s[i]=='?'){
            ans=(ans*26)%MOD;
        }
    }
    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout << solve(s)<<endl;
    }
}