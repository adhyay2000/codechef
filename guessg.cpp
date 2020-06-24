#include<bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(NULL);
    cin.sync_with_stdio(false);
    int n;
    cin >> n;
    long int l1,l2,r1,r2;
    l1=l2=1;
    r1=r2=n;
    bool flag=true;
    while(flag){
        flag=false;
        if(l1<=r1){
            flag=true;
            long int mid1 = (l1+r1)/2;
            cout << mid1 << endl;
            fflush(stdout);
            char result;
            cin >> result;
            if(result=='E') return 0;
            if(result=='G') l1=mid1+1;
            if(result=='L') r1=mid1-1;
        }
        if(l2<=r2){
            flag=true;
            long int mid2 = (l2+r2)/2;
            cout << mid2 << endl;
            fflush(stdout);
            char result;
            cin >> result;
            if(result=='E') return 0;
            if(result=='G') l2=mid2+1;
            if(result=='L') r2=mid2-1;
        }
    }
}