#include<bits/stdc++.h>
using namespace std;
void print_vec(vector<vector<int>> ret){
    cout << ret.size() << endl;
    for(int i=0;i<ret.size();i++){
        cout << ret[i][0]+1 << " "<< ret[i][1]+1 << " "<< ret[i][2]+1<< endl;
    }
}
bool is_sorted(int arr[],int size){
    for(int i=0;i<size;i++){
        if(arr[i+1]-arr[i]>0) continue;
        else return false;
    }
    return true;
}
int min_index(int arr[],int size,int ele){
    int min_index;
    if(arr[0]!=ele) min_index=0;
    else min_index=1;
    for(int i=0;i<size;i++){
        if(arr[i]==ele) continue;
        if(arr[i]<arr[min_index]){
            min_index=i;
        }
    }
    return min_index;
}
void solve(int arr[],int size,int k){
    vector<vector<int>> ret;
    int i;
    for(int i=0;i<size;i++){
        // if(i is min_index)
        
        // int i1=i;
        // int i2=max_index(arr,size,INT_MAX);
        // int i3=max_index(arr,size,arr[i2]);
        int v1=arr[i1];
        int v2=arr[i2];
        int v3=arr[i3];
        arr[i1]=v2;
        arr[i2]=v3;
        arr[i3]=v1;
        vector<int> tmp;
        tmp.push_back(i3);
        tmp.push_back(i2);
        tmp.push_back(i1);
        ret.push_back(tmp);
        if(is_sorted(arr,size)) break;
    }
    if(i==k) cout << -1 << endl;
    else print_vec(ret);
}
int main(){
    int test;
    cin >> test;
    for(int i=0;i<test;i++){
        int n,k;
        cin >> n >> k;
        int arr[n];
        for(int i=0;i<n;i++){
            int tmp;
            cin >> tmp;
            arr[i]=tmp;
        }
        solve(arr,n,k);
    }
}