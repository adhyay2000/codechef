#include<bits/stdc++.h>
using namespace std;
long long ans(long long ts){
    while(ts%2==0){
        ts=ts>>1;
    }
    if(ts==1) return 0;
    else return (ts-1)/2;
}
long long solve(long long ts){
    if(ts%2==0){ //even
        if(floor(log2(ts))==log2(ts)) return 0;
        else{
            if(ts%4==0) return ans(ts);
            return ts/4;
        }
    }else{ //odd
        if(ts==1) return 0;
        else return (ts-1)/2;
    }
}
int main(){
    cin.tie(NULL);
    cin.sync_with_stdio(false);
    int test;
    cin >> test;
    while(test--){
        long long ts;
        cin >> ts;
        cout << solve(ts) << endl;
        // cout << "for" << ts << "answer is:" << solve(ts) << endl;
    }
}