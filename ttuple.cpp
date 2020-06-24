#include<bits/stdc++.h>
using namespace std;
int main(){
    cin.sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int a,b,c,p,q,r;
        cin >> a>>b>>c>>p>>q>>r;
        bool arr[3];
        for(int i=0;i<3;i++){
            arr[i]=true;
        }
        int d=0;
        int count=0;
        while(arr[0]||arr[1]||arr[2]){
            int diff1 = p-a;
            int diff2 = q-b;
            int diff3 = r-c;
            d=INT_MAX;
            for(int i=0;i<3;i++){
                if(arr[0]==true) d=min(diff1,d);
                if(arr[1]==true) d=min(diff2,d);
                if(arr[2]==true) d=min(diff3,d);
            }
            if(d!=0) count++; 
            a = a+d;
            b = b+d;
            c = c+d;
            if(p==a) arr[0]=false;
            if(q==b) arr[1]=false;
            if(r==c) arr[2]=false;
        }
        cout << count << endl;
    }
}