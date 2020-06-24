#include<bits/stdc++.h>
using namespace std;
void dfs(int i,vector<vector<pair<int,int>>> &adj,vector<bool> &u,int l,int r){
    if(!u[i]){
        u[i]=true;
        for(auto edges:adj[i]){
            if(edges.second>r || edges.second<l) continue;
            dfs(edges.first,adj,u,l,r);
        }
    }
}
void solve(vector<vector<pair<int,int>>> &adj,int l,int r){
    vector<bool> u(adj.size(),false);
    int count=0;
    for(int i=0;i<adj.size();i++){
        if(u[i]==false){
            dfs(i,adj,u,l,r);
            count++;
        }
    }
    cout << count << endl;
}
int main(){
    cin.tie(NULL);
    cin.sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int n,m,q;
        cin>>n>>m>>q;
        vector<vector<pair<int,int>>>adj(n,vector<pair<int,int>>(0));
        for(int i=0;i<m;i++){
            int v,u;
            cin >> v >> u;
            adj[v-1].push_back({u-1,i+1});
            adj[u-1].push_back({v-1,i+1});
        }
        for(int i=0;i<q;i++){
            int l,r;
            cin>>l>>r;
            solve(adj,l,r);
        }
    }
}