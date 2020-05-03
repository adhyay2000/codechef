#include<bits/stdc++.h>
using namespace std;
int recur(int arr[],vector<string>&s,int k,int index){
    if(arr[index]!=-1) return arr[index];
    for(int i=0;i<s.size();i++){
        
    }
}
int solve(int k,vector<string>&s){
    int curr;
    int arr[s.size()];
    for(int i=0;i<s.size();i++){
        arr[i]=-1;
    }
    arr[s.size()-1]=0;
    recur(arr,s,k,0);    
    return arr[0];
}
int main(){
    int test;
    cin >> test;
    for(int t=0;t<test;t++){
        int n,k;
        cin >> n >> k;
        vector<string> s; //2d matrix
        s.clear();
        for(int i=0;i<n;i++){
            string s1;
            cin >> s1;
            s.push_back(s1);
        }
        cout << solve(k,s) << endl;
    }
}