#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin>>test;
    for(int i=0;i<test;i++){
        int a,b,c;
        cin >> a >> b>> c;
        int num=c%a;
        if(num==b){
            cout << c << endl;
        }
        else if(num>b){
            cout << c-num+b%a<<"\n";
            // cout<< c-((c-b)%a)<< "\n";
        }
        else{ //(num<b)
            cout << c-a-num+b%a << "\n";
        }
    }
}