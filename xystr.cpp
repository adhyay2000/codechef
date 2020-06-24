#include<bits/stdc++.h>
using namespace std;
void solve(string s){
    int count=0;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]=='x'&&s[i+1]=='y') {
            count++;
            i++;
        }
        else if(s[i]=='y' && s[i+1]=='x') {
            count++; 
            i++;
        }
    }
    cout << count << endl;
}
int main(){
    cin.tie(NULL);
    cin.sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        solve(s);
    }
}