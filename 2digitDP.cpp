#include<bits/stdc++.h>
using namespace std;
vector<int> num;
int a,b,d,k;
int DP[12][12][2];
int main(){
    cin >> a >> b >> d>> k;
    int res=solve(b)-solve(a-1);
    cout << res << endl;
}