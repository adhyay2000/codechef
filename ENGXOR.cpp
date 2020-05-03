#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
// void check(int tmp[],int size,unordered_map<int,int> &mp,int* even,int* odd){
//     for(int i=0;i<size;i++){
//         if(mp.find(tmp[i])!=mp.end()){
//             tmp[i]=mp[tmp[i]];
//             continue;
//         }
//         int count=0;
//         while(tmp[i]!=0){
//             count += tmp[i]%2;
//             tmp[i] = tmp[i] >> 1;
//         }
//         if(count%2==0) (*even)++;
//         else (*odd)++;
//         // printf("%d %d\n",*even,*odd);
//     }
// }
int main(){
    int test;
    unordered_map<int,int> mp;
    scanf("%d",&test);
    for(int i=0;i<test;i++){
        int N,Q;
        scanf("%d %d",&N,&Q);
        int arr[N];
        for(int i=0;i<N;i++){
            int temp;
            scanf("%d",&temp);
            arr[i]=temp;
        }
        for(int i=0;i<Q;i++){
            int p;
            scanf("%d",&p);
            int tmp[N];
            int odd=0,even=0;
            for(int i=0;i<N;i++)
            {
                tmp[i] = arr[i]^p;
                if(mp.find(tmp[i])!=mp.end()){
                    tmp[i]=mp[tmp[i]];
                    if(tmp[i]%2==0) even++;
                    else odd++;
                    continue;
                }
                int count=0;
                while(tmp[i]!=0){
                    count += tmp[i]%2;
                    tmp[i] = tmp[i] >> 1;
                }
                mp[tmp[i]]=count%2;
                if(count%2==0) even++;
                else odd++;
            }
            // check(tmp,N,mp,&even,&odd);
            // for(int i=0;i<N;i++){
            //     if(tmp[i]==0) even++;
            //     else odd++;
            // }
            printf("%d %d\n",even,odd);
        } 
    }
}