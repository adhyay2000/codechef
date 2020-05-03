#include<bits/stdc++.h>
using namespace std;
int value_coins(vector<int> &arr,int num){
    if(num==0) return 0;
    if(num==1) return 1;
    if(num==2) return 2;
    if(num==3) return 3;
    if(num==4) return 4;
    if(arr[num]!=0) return arr[num];
    arr[num/2]=value_coins(arr,num/2);
    arr[num/3]=value_coins(arr,num/3);
    arr[num/4]=value_coins(arr,num/4);
    return arr[num]=max(arr[num/2]+arr[num/3]+arr[num/4],arr[num]);
}
int main(){
    for(int t=0;t<10;t++){
        int num=0;
        cin >> num;
        if(num==0) break;
        vector<int> arr(num+1,0);
        cout << value_coins(arr,num) << endl;
    }
}