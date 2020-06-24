#include<bits/stdc++.h>
using namespace std;
void solve(vector<int> arr){
    unordered_map<int,int> mp;
    for(int i=0;i<arr.size()-1;i++){
        if(mp.find(arr[i])!=mp.end()){
            cout << "NO" << endl;
            return;
        }
        if(mp.find(arr[i])==mp.end()) mp[arr[i]]=0;
        while(i+1<arr.size() && arr[i]==arr[i+1]){
            mp[arr[i]]++;
            i++;
        }
    }
    unordered_map<int,int> rev;
    for(auto it:mp){
        if(rev.find(it.second)!=rev.end()){
            cout << "NO" << endl;
            return;
        }
        rev[it.second]=it.first;
    }
    cout << "YES" << endl;
}
int main(){
    int test;
    cin>> test;
    while(test--){
        int n;
        cin >> n;
        vector<int> arr;
        for(int i=0;i<n;i++){
            int tmp;
            cin >> tmp;
            arr.push_back(tmp);
        }
        solve(arr);
    }
}