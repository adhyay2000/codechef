#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    while(n--){
        long long x1,x2,x3,y1,y2,y3;
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        long long a = (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1);
        long long b = (x3-x2)*(x3-x2) + (y3-y2)*(y3-y2);
        long long c = (x3-x1)*(x3-x1) + (y3-y1)*(y3-y1);
        if(a==b+c || b==a+c || c==a+b) count++;
    }
    cout<<count <<endl;
}