#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main(){
    int test;
    cin >> test;
    for(int i=0;i<test;i++){
        int M,N;
        cin >> N >> M;    
        vector<int> F;
        vector<int> P;
        for(int i=0;i<N;i++){
            int tmp;
            cin >> tmp;
            F.push_back(tmp);
        }
        // for(int i=0;i<N;i++){
        //     cout << F[i] << endl;
        // }
        for(int i=0;i<N;i++){
            int tmp;
            cin >> tmp;
            P.push_back(tmp);
        }
        // for(int i=0;i<N;i++){
        //     cout << P[i] << endl;
        // }
        int arr[M];
        bool brr[M];
        for(int i=0;i<M;i++)
        {
            arr[i]=0;
            brr[i]=false;
        }
        for(int i=0;i<N;i++)
        {
            arr[F[i]-1] += P[i];
            brr[F[i]-1] = true;
        }
        int min=INT_MAX;
        for(int i=0;i<M;i++)
        {
            if(brr[i]==true && min>arr[i]) min=arr[i];
        }
        cout << min << endl;
    }
}