#include<bits/stdc++.h>
using namespace std;
int f[100];
void solve(int num){
    // int index=0;
    // if(num==2){
    //     cout << "ab" << endl;
    //     return;
    // }
    // while(index<100 && f[index]<num) index++;
    // if(f[index]==num){
    //     for(int i=0;i<index;i++){
    //         cout << 'a';
    //     }
    //     cout << endl;
    // }
    // else{
    //     int i;
    //     for(i=0;i<index-1;i++){
    //         cout<<'a';
    //     }
    //     num-=index-1;
    //     int count=0;
    //     while(i<num){
    //         cout << (char)('b'+count);
    //         count++;
    //         i++;
    //     }
    //     cout << endl;
    // }
    for(int i=0;i<num;i++){
        cout << (char)('a'+i%26);
    }
    cout << endl;
    return;
}
int main(){
    f[0]=1;
    f[1]=1;
    f[2]=3;
    for(int i=3;i<100;i++){
        f[i]=f[i-1]+i;
    }
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