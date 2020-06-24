#include<bits/stdc++.h>
using namespace std;
int solve(vector<int> &ret){
    int maxi=ret[0];
    int max_index=0;
    for(int i=0;i<ret.size();i++){
        if(ret[i]>=maxi){
            maxi=ret[i];
            max_index=i;
        }
    }
    if(max_index<ret.size()/2) max_index=ret.size()/2;
    return ret.size()-1-max_index;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin >> test;
    for(int i=0;i<test;i++){
        int n;
        cin>>n;
        vector<int> ret;
        for(int i=0;i<n;i++){
            int tmp;
            cin >> tmp;
            ret.push_back(tmp);
        }
        cout << solve(ret)<< endl;
    }
}