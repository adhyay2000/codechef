#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int ds,dt,d;
        cin>>ds>>dt>>d;
        if(dt<ds){
            swap(ds,dt);
        }
        if(d>=ds+dt) cout<<d-ds-dt<<endl;
        else if(d+ds>=dt) {
            cout<<0<<endl;
            // if(ds+dt>d) cout<<ds+dt-d<<endl;
            // else cout<<d+ds-dt<<endl;
        }
        else{
            cout<<dt-ds-d<<endl;
        }
    }
}