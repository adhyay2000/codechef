#include<bits/stdc++.h>
using namespace std;
int solve(int m,vector<int> &ret){
    int max=1;
    for(int i=2;i<=m;i++){
        int flag=0;
        for(int j=0;j<ret.size();j++){
            if(i%ret[j]==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            if(max<i) max=i;
        }
    }
    return max;
}
int main(){
    int test;
    cin >> test;
    vector<int> ret;
    for(int t=0;t<test;t++){
        int n,m;
        cin >> n >> m;
        ret.clear();
        for(int i=0;i<n;i++){
            int tmp;
            cin >> tmp;
            ret.push_back(tmp);
        }
        cout << solve(m,ret) << endl;
    }
}