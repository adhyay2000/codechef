#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    long long n,k;
    while(t--){
        cin>>n>>k;
        if(k==0){
            cout<<0 <<" " <<n<< endl;
            continue;
        }
        cout << n/k <<" "<< n%k <<endl;
    }
}