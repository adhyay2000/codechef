#include<bits/stdc++.h>
using namespace std;

// void solve(int x,int y,int l,int r){
//     int max_bits = max(find_number_bits(x),find_number_bits(y));

// }
//consider a number Z such that all its values are 1
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin >> test;
    long long int tmp;
    for(int i=0;i<test;i++){
        int x,y,l,r;
        cin >> x >> y >> l >> r;
        tmp = x|y;
        if(tmp<=r && tmp>=l) cout << tmp << endl;
        else{
            while(tmp>r) tmp=tmp/2;
            cout << tmp << endl;
        }
    }
}