#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int num_0s=0,num_1s=0;
        for(auto it:s){
            if(it=='0') num_0s++;
            else num_1s++;
        }
        if(min(num_0s,num_1s)!=0 && (max(num_0s,num_1s)-min(num_0s,num_1s))%2==0){
            cout<< (max(num_0s,num_1s)-min(num_0s,num_1s))/2<<endl;
        }else {
            cout<<-1 <<endl;
        }
    }
}