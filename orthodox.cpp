#include<bits/stdc++.h>
using namespace std;
// string solve(vector<int>arr){
//     unordered_set<int> position;
//     for(int i=0;i<arr.size();i++){
//         int count=0;
//         while(arr[i]!=0){
//             if(arr[i]%2!=0){
//                 if(position.find(count)!=position.end()) return "NO";
//                 position.insert(count);
//             }
//             count++;
//             arr[i]=arr[i]>>1;
//         }
//     }
//     return "YES";
// }
string solve_i(vector<int> arr){
    unordered_set<int> st;
    for(int i=0;i<arr.size();i++){
        int curr=arr[i];
        for(int j=i+1;j<arr.size();j++){
            int next = curr|arr[j];
            if(curr==next) return "NO";
            if(st.find(next)!=st.end()) return "NO";
            st.insert(next);
            curr=next;
        }
    }
    return "YES";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        // cout<<solve(arr)<<endl;
        cout<<solve_i(arr)<<endl;
    }
}

/*
6: 110
5: 101
8: 100

6 : 110
65: 111
658: 1111
5
58
8
*/