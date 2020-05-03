#include<vector>
#include<stdbool.h>
#include<time.h>
#include<iostream>
#define MAX 1000000001
using namespace std;
int main(){
    int test;
    scanf("%d",&test);
    for(int i=0;i<test;i++){
        int x,k;
        scanf("%d %d",&x,&k);
        int count=0;
        if(k>=30){
            printf("0\n");
            continue;
        }
        if(x<(1<<k)){
            printf("0\n");
            continue;
        }
        for(int i=2;i<MAX;i++){
            while(x%i==0) {
                x/=i;
                count++;
                if(count>=k) break;
            }
            if(x==1) break;
            if(count>=k) break;
        }
        if(count>=k) printf("1\n");
        else printf("0\n");
    }
}
