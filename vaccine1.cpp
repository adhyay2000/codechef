#include<bits/stdc++.h>
using namespace std;
int main(){
    int d1,v1,d2,v2,p;
    cin>>d1>>v1>>d2>>v2>>p;
    if(d1<d2){
        int d = d1-1;
        while(d!=d2-1){
            p-=v1;
            if(p<0) break;
            d++;
        }
        while(p>0){
            p-=(v1+v2);
            d++;
        }
        cout << d << endl;
    }else{
        int d = d2-1;
        while(d!=d1-1){
            p-=v2;
            if(p<0) break;
            d++;
        }
        while(p>0){
            p-=(v1+v2);
            d++;
        }
        cout << d << endl;
    }
}