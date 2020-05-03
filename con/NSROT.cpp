#include<bits/stdc++.h>
using namespace std;
int Log2(int x){
    if(x<=1) return 0;
    else{
        return Log2(x/2)+1;
    }
}
int help(vector<int> &p,vector<int> &q){
    int posA[p.size()];
    int posB[q.size()];
    for(int i=1;i<=p.size();i++){
        int tmp=p[0];
        p.erase(p.begin());
        posA[tmp]=i;
        p.push_back(tmp);
    }
    for(int i=1;i<=q.size();i++){
        int tmp=q[0];
        q.erase(q.begin());
        posB[tmp]=i;
        q.push_back(tmp);
    }
    int ret=0;
    for(int i=1;i<=q.size();i++){
        ret+=Log2(abs(posA[i-1]-posB[i-1]));
    }
    return ret;
}
vector<int> right_shift(vector<int>&q,int i){
    while(i>0){
        int tmp=q[0];
        q.erase(q.begin());
        q.push_back(tmp);
        i--;
    }
    return q;
}
int solve(vector<int>&p,vector<int> &q,int v){
    int result=1;
    for(int i=0;i<v;i++){
        vector<int> r=right_shift(q,i);
        result *= help(p,r)%998244353;
    }
    return result%998244353;
}
int main(){
    int test;
    cin >> test;
    vector<int> p,q;
    for(int t=0;t<test;t++){
        int n,v;
        cin >> n >> v;
        for(int i=0;i<n;i++){
            int tmp;
            cin >> tmp;
            p.push_back(tmp);
        }
        for(int i=0;i<n;i++){
            int tmp;
            cin >> tmp;
            q.push_back(tmp);
        }
        cout << "hey" << endl;
        cout << solve(p,q,v) << endl;
    }
}