#include<bits/stdc++.h>
using namespace std;
#define BOUND 1000000000
// bool **arr;
bool isValid(int x)
{
    for(int i=3;i<=x;i=i+2){
        if(x%i==0){
            x=x/i;
            break;
        }
    }
    if(x==1) return false;
}
bool solve(int x,int k){
    if(x==1) return false;
    if(x<k+1) return false;
    if(k==1) {
        if(x==1) return false;
        return true;
    }
    // if(k==2){
    //     if((x)^1!=0 && isValid(x)) return true;
    //     if(x==2) return false;
    //     if(x^1==0) return true;
    // }
    else{
        //form sieve
        bool arr[x+1]={true};
        for(int i=2;i<x;i++){
            if(arr[i]==false) continue;
            for(int j=i+i;j<x+1;j=j+i){
                arr[j]=false;
            }
        }
        //find prime factorization
        int num=2;
        while(1){
            while(num!=x+1 && arr[num]==false) num++;
            if(num==x+1) break;
            while(x%num==0) {
                k--;
                x=x/num;
            }
            if(k==0 || x==1) break;
            num++;
            if(num==x+1) break;
        }
        if(x==1 && k>0) return false;
        if(k>0) return false;
        else return true;
    }
    return true;
}

int main(){
    int test;
    cin >> test;
    for(int i=0;i<test;i++){
        int x,k;
        cin >> x >> k;
        bool b = solve(x,k);
        if(b==true) cout << 1 << endl;
        else cout << 0 << endl;
    }
}