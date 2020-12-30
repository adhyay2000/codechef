#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long double h,s;
        cin>>h>>s;  
        if(h*h*h*h-16*s*s<0) {
            cout<<-1<<endl;
            continue;
        }
        long double a = sqrt((h*h+sqrt(h*h*h*h-16*s*s))/2.0);
        long double b = sqrt((h*h-sqrt(h*h*h*h-16*s*s))/2.0);
        long double c = h;
        printf("%Lf %Lf %Lf\n",min(a,b),max(a,b),c);
        // cout<< float(c)<<" "<< float(max(a,b)) <<" "<<float(min(a,b)) << endl;
    }
}