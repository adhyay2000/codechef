#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    int arr[2];
    int brr[2];
    for(int t=0;t<test;t++){
        int a,b;
        cin >> a >> b;
        if(a<10){
            if(b<10) cout << a+b << endl;
            else if(b/10 < a) cout << 10*a + b/10+b%10 << endl;
            else cout << a+b << endl;
            continue;
        }
        if(b<10){
            if(a<10) cout << a+b << endl;
            else if(a/10 < b) cout << 10*b + a/10+a%10 << endl;
            else cout << a+b << endl;
            continue;
        }
        arr[0]=a%10;
        arr[1]=a/10;
        brr[0]=b%10;
        brr[1]=b/10;
        // cout << arr[0] << arr[1] << brr[0] << brr[1] << endl;
        int sum1,sum2,sum3;
        sum1=a+b;
        //sum2
        int tmp=arr[0];
        arr[0]=brr[1];
        brr[1]=tmp;
        sum2 = arr[0]+brr[0]+10*arr[1]+10*brr[1];
        
        arr[0]=a%10;
        arr[1]=a/10;
        brr[0]=b%10;
        brr[1]=b/10;
        
        //sum3
        tmp=brr[0];
        brr[0]=arr[1];
        arr[1]=tmp;
        sum3=arr[0]+brr[0]+10*arr[1]+10*brr[1];
        cout << max(sum1,max(sum2,sum3)) << endl;
    }  
}