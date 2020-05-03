#include<iostream>
using namespace std;
int main(){
    int test;
    cin >> test;
    for(int i=1;i<=test;i++){
        int l,r;
        cin >> l >> r;
        int count=0;
        for(int j=l;j<=r;j++){
            if(j%10==2 || j%10==3 || j%10==9){
                count++;
            }
        }
        printf("%d\n",count);
    }
}
