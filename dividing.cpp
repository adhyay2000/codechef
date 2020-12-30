#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    vector<int> arr(n);
    long long sum=0;
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    if(sum==(n*(n+1))/2){
        cout << "YES" << endl;
    }else cout<<"NO" <<endl;
}