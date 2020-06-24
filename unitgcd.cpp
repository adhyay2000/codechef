#include<bits/stdc++.h>
using namespace std;
void solve(int num){
    if(num==1) {
        printf("1\n");
        printf("1 1\n");
    }else if(num%2==0){
        printf("%d\n",num/2);
        for(int i=1;i<num;i=i+2){
            printf("2 %d %d\n",i,i+1);
        }
    }else{
        printf("%d\n",num/2);
        printf("3 1 2 3\n");
        for(int i=4;i<num;i=i+2){
        printf("2 %d %d",i,i+1);
        }
    }
}
int main(){
    int test;
    cin >> test;
    for(int i=0;i<test;i++){
        int num;
        cin >> num;
        if(num==1) {
            printf("1\n");
            printf("1 1\n");
        }else if(num%2==0){
            printf("%d\n",num/2);
            for(int i=1;i<num;i=i+2){
                printf("2 %d %d\n",i,i+1);
            }
        }else{
            printf("%d\n",num/2);
            printf("3 1 2 3\n");
            for(int i=4;i<num;i=i+2){
            printf("2 %d %d\n",i,i+1);
            }
        }
    }
}