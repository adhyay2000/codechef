#include<bits/stdc++.h>
using namespace std;
unsigned long long LCM1(unsigned long long lcm,unsigned long long a){
    return lcm*a/__gcd(lcm,a);
}
int main(){
    int test;
    scanf("%d",&test);
    for(int i=0;i<test;i++){
        int n;
        scanf("%d",&n);
        if(n==1){
            printf("1\n");
            printf("1 1\n");
            continue;
        }
        bool *arr=(bool*) calloc(n+1,sizeof(bool));
        vector<vector<int>> ret;
        vector<int> tmp;
        ret.clear();
        long long gcd1=1;
        for(int i=1,j=0;i<=n;i++){
            tmp.clear();
            gcd1=1;
            if(arr[i]==true) continue;
            else{
                for(int k=i,j=0;k<=n;k++){
                    if(arr[k]==true) continue;
                    if(gcd(gcd1,k)==1){
                        arr[k]=true;
                        tmp.push_back(k);
                    } 
                }
            }
            ret.push_back(tmp);
        }
        free(arr);
        printf("%ld\n",ret.size());
        for(int i=0;i<ret.size();i++){
            printf("%ld ",ret[i].size());
            for(int j=0;j<ret[i].size()-1;j++){
                printf("%d ",ret[i][j]);
            }
            printf("%d\n",ret[i][ret[i].size()-1]);
        }
    }
}