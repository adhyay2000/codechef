#include<bits/stdc++.h>
using namespace std;
void dfs(unordered_map<string,int> mp)
int main(){
    int test;
    cin >>test;
    for(int i=0;i<test;i++){
        int num=0;
        cin >> num;
        vector<pair<int,int>> path;
        for(int j=0;j<num-1;j++){
            int a,b;
            cin >> a>> b;
            path.push_back(make_pair(a,b));
        }
        vector<int> cost;
        for(int i=0;i<num;i++){
            int tmp;
            cin >> tmp;
            cost.push_back(tmp);
        }
        unordered_map<string,int> mp;
        dfs(mp,cost,path);
        //can be anyform of tree
        //unique path from u to v
        int q;
        cin >> q;
        for(int i=0;i<q;i++){
            int u,v;
            cin >> u >> v;
            
        }
    }
}