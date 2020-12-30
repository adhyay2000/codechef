#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==0){
            cout<<""<<endl;
            continue;
        }
        n++;
        int q = n/25;
        int r = n%25;
        string s="";
        string ref("abcdefghijklmnopqrstuvwxyz");
        for(int i=0;i<q;i++){
            s+=ref;
        }
        for(int i=0;i<r;i++){
            s+=ref[i];
        }
        reverse(s.begin(),s.end());
        cout<<s<<endl;
    }
}