#include<bits/stdc++.h>
using namespace std;
bool check(int arr[],int x){
    bool flag=true;
    for(int i=0;i<26;i++){
        if(arr[i]>x){
            flag=false;
            break;
        }
    }
    return flag;
}
int main(){
    int test;
    cin >> test;
    string s;
    int arr[26];
    for(int t=0;t<test;t++){
        s.clear();
        cin >> s;
        int x,k;
        cin >> k >> x;
        for(int i=0;i<26;i++) arr[i]=0;
        if(k==0){
            int i;    
            for(i=0;i<s.size();i++){
                arr[s[i]-'a']++;
                if(check(arr,x)==false) break;
            }
            cout << i << endl;
            continue;
        }else{
            int i;
            for(i=0;i<s.size();i++){
                arr[s[i]-'a']++;
                if(k>0 && check(arr,x)==false){
                    s.erase(s.begin()+i);
                    arr[s[i]-'a']--;
                    k--;
                }else if(k==0) break;
            }
            cout << i << endl;
        }
    }
}