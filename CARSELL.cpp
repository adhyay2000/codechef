#include<bits/stdc++.h>
#define MOD 1000000007
#define ll long long
using namespace std;
bool cmp(int a,int b){
    if(a>b) return true;
    else return false;
}
// ll arr[100001];
int solve(vector<ll> ret){
    sort(ret.begin(),ret.end(),cmp); //can improve it
    // for(int i=0;i<ret.size();i++){
    //     cout << ret[i] << endl;
    // }
    ll sum=0;
    for(int i=0;i<ret.size();i++){
        sum+=(ret[i]-i > 0)?(ret[i]-i):(0);
        sum=sum%MOD;
    }
    return sum%MOD;
}
int main(){
    int test;
    cin>>test;
    for(int i=0;i<test;i++){
        int N;
        cin >> N;
        vector<ll> ret;
        ret.clear();
        for(int i=0;i<N;i++){
            ll tmp;
            cin >> tmp;
            ret.push_back(tmp);
        }
        cout << solve(ret)<<endl;
    }
}