#include<bits/stdc++.h>
using namespace std;
vector<int> num;
int DP[12][12][2];
int a,b,d,k;
int call(int pos,int cnt,int flag){
    if(cnt>k) return 0;
    if(pos==num.size()){
        if(cnt==k) return 1;
        else return 0; 
    }
    int LMT;
    int res=0;
    if(flag==0){
        LMT=num[pos];
    }else{
        LMT=9;
    }
    if(DP[pos][cnt][flag]==-1) return DP[pos][cnt][flag];
    for(int dgt=0;dgt<=LMT;dgt++){
        int nf=flag;
        int ncnt=cnt;
        if(flag==0 && dgt<LMT) nf=1;
        if(dgt==d) ncnt++;
        if(ncnt<=k) res+=call(pos+1,ncnt,nf);
    }
    return res;
}
int solve(int b){
    num.clear();
    while(b!=0){
        num.push_back(b%10);
        b/=10;
    }
    memset(DP,-1,sizeof(DP));
    return call(0,0,0);
}
int main(){
    cin>> a >> b >> d >> k;
    int res=solve(b)-solve(a-1);
    cout << res << endl;
    return 0;    
}