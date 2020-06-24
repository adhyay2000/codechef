#include<bits/stdc++.h>
using namespace std;
void solve(vector<int> arr){
    // for(int i=0;i<arr.size();i++){
    //     if(arr[i]==5) arr[i]=1;
    //     else if(arr[i]==10) arr[i]=-1;
    // }
    // int sum=0;
    // for(int i=0;i<arr.size();i++){
    //     sum+=arr[i];
    //     if(sum<0){
    //         cout << "NO" << endl;
    //         return;
    //     }
    // }
    // cout << "YES" << endl;
    // return;
    int num_5=0,num_10=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==5) num_5++;
        else if(arr[i]==10) {
            num_5--;
            num_10++;
        }else if(arr[i]==15){
            if(num_10>0) num_10--;
            else num_5-=2;
        }
        if(num_5<0 || num_10<0){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
    return;
}
int main(){
    cin.tie(NULL);
    cin.sync_with_stdio(false);
    int test;
    cin >> test;
    while(test--){
        int n;
        cin>> n;
        vector<int> arr;
        for(int i=0;i<n;i++){
            int tmp;
            cin >> tmp;
            arr.push_back(tmp);
        }
        solve(arr);
    }
}