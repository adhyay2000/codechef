#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    for(int t=0;t<test;t++){
        int N,a,b,c;
        cin >> N >> a >> b>> c;
        vector<int> F;
        F.clear();
        for(int i=0;i<N;i++){
            int tmp;
            cin >> tmp;
            F.push_back(tmp);
        }
        long min= abs(b-F[0])+abs(a-F[0]);
        min=min+c;
        for(int i=1;i<F.size();i++){
            long time = abs(b-F[i])+abs(F[i]-a);
            time = time+c;
            if(time<min) min=time;
        }

        cout << min << endl;
    }
}