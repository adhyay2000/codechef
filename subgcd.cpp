#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>arr){
    int ans=__gcd(arr[0],arr[1]);
    for(int i=2;i<arr.size();i++){
        ans = __gcd(arr[i],ans);
    }
    if(ans==1) return arr.size();
    else return -1;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        printf("%d\n",solve(arr));
    }    
}