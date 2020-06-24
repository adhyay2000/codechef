#include<bits/stdc++.h>
using namespace std;
void solve(int num){
    if(num%2==0){
        for(int i=1;i<=num-2;i=i+2){
            cout << i+1 << " "<< i << " ";
        }
        cout << num << " "<< num-1 << endl;
    }else{
        for(int i=1;i<num-2;i=i+2){
                cout << i+1 << " "<< i << " ";
        }
        cout << num-1 << " "<< num << " "<< num-2<< endl;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin >> test;
    for(int i=0;i<test;i++){
        int num;
        cin >> num;
        solve(num);
    }
}