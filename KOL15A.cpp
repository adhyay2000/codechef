#include<bits/stdc++.h>
using namespace std;
void solve(string s){
    int sum=0;
    for(int i=0;i<s.size();i++){
        if(s[i]>='1' && s[i]<='9') sum+=s[i]-'0';
    }
    cout << sum << endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin>>test;
    for(int i=0;i<test;i++){
        string s;
        cin >> s;
        solve(s);
    }
}