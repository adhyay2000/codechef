#include<bits/stdc++.h>
using namespace std;
void solve(int n){
    vector<vector<int>> arr(n,vector<int>(n,0));
    if(n%2==0){
        int count=1;
        for(int i=0;i<n;i++){
            if(i%2==0){
                for(int j=0;j<n;j++){
                    arr[i][j]=count;
                    count++;
                }
            }else{
                for(int j=n-1;j>=0;j--){
                    arr[i][j]=count;
                    count++;
                }
            }
        }
    }else{
        int count=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                arr[i][j]=count;
                count++;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main(){
    cin.sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin >> test;
    while(test--){
        int n;
        cin >> n;
        solve(n);
    }
}