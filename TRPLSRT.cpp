#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin >> test;
    for(int i=0;i<test;i++){
        int n,q;
        cin >> n>>q;
        string s;
        cin >> s;
        int arr[26]={0};
        int tmp[26];
        for(auto it:s){
            arr[it-'a']++;
        }
        for(int i=0;i<q;i++){
            int capacity;
            cin >> capacity;
            for(int i=0;i<26;i++){
                tmp[i]=arr[i];
            }
            // for(int j=0;j<capacity;j++){ //problem
                for(int i=0;i<26;i++){
                    if(tmp[i]!=0) tmp[i]=(tmp[i]-capacity>=0)?tmp[i]-capacity:0;
                }
            // }
            int sum=0;
            for(int i=0;i<26;i++) sum+=tmp[i];
            cout << sum << endl;
        }
    }
}