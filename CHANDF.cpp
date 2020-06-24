#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin >> test;
    for(int i=0;i<test;i++){
        long long x,y,l,r,tmp;
        cin >> x >> y>> l >> r;
        tmp = x|y;
        cout << tmp << endl;
    }
}