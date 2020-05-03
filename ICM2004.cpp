//TODO//
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stdio.h>
#include<string.h>

using namespace std;
#define MOD 1000000007
int main()
{
    int test;
    scanf("%d",&test);
    for(int t=1;t<=test;t++){
        int n;
        string s;
        scanf("%d",&n);
        cin >> s;
        int q;
        scanf("%d",&q);
        for(int i=1;i<=q;i++){
            int type;
            scanf("%d",&type);
            if(type==1){
                int l,r;
                char c;
                scanf("%d %d %c",&l,&r,&c);
                memset((char*)s.c_str()+l-1,c,(r-l+1));
            }else{
                int l,r,p,q;
                scanf("%d %d %d %d",&l,&r,&p,&q);
                for(int j=l;j<=r;j++){
                    if(s[j-1]=='A'){
                        int tmp1,tmp2;
                        tmp1=(p-q+MOD)%MOD;
                        tmp2=(p+q)%MOD;
                        p=tmp1;
                        q=tmp2;
                    }
                    else{
                        int tmp1,tmp2;
                        tmp1=(q-p+MOD)%MOD;
                        tmp2=(p+q)%MOD;
                        p=tmp2;
                        q=tmp1;
                    }
                }
                printf("%d %d\n",p,q);
            }
        }
    }
}
