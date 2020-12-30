#include<bits/stdc++.h>
using namespace std;
int F(int n){
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            if((i^j)==n){
                return max(i,j);
            }
        }
    }
    // cout<<-1<<" "<<-1<<endl;
    return -1;
}
int get_b(int n){
    // cout<<n<<endl;
    if(n==1){
        return -1;
    }
    if(n%2!=0){
        return n-1;
    }else{
        int count=0;
        while(n%2==0) {
            n=n>>1;
            count++;
        }
        if(get_b(n)==-1) return -1;
        else return (1<<count)*get_b(n);
    }
}
int g(int l,int r){
    int sum=0;
    for(int i=l;i<=r;i++){
        sum+=get_b(i);
    }
    return sum;
}
int main(){
    int sum=0;
    for(int i=1;i<=2;i++){
        sum+=F(i);
    }
    cout<<sum<<endl;
    // int t;
    // cin>>t;
    // while(t--){
    //     int l,r;
    //     cin>>l>>r;
    //     time_t curr = time(0);
    //     cout<< g(l,r)<< endl;       
    //     time_t last = time(0);
    //     cout<< difftime(last,curr)<< endl;
    // }
}

/*
1: -1
2: -1
3: 2
4: -1
5: 4
6: 4
7: 6
8: -1
9: 8
10: 8


1010
*/