#include<bits/stdc++.h>
using namespace std;
bool alongaxis(char s,char t){
    if(s==t) return true;
    if(s=='R'&& t=='L') return true;
    if(s=='L'&&t=='R') return true;
    if(s=='U'&& t=='D') return true;
    if(s=='D'&&t=='U') return true;
    return false;
}
void solve(string s){
    int x=0;
    int y=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='L'){
            x-=1;
        }else if(s[i]=='R'){
            x+=1;
        }else if(s[i]=='U'){
            y+=1;
        }else if(s[i]=='D'){
            y-=1;
        }
        while(i<s.size() && alongaxis(s[i],s[i+1])) i++;
    }
    cout << x << " "<< y << "\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin >> test;
    for(int i=0;i<test;i++){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int x=0,y=0;
        solve(s);
    }
}