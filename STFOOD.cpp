#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    for(int t=0;t<test;t++){
        int n;
        vector<int> s;
        vector<int> p;
        vector<int> v;
        s.clear();
        v.clear();
        p.clear();
        cin >> n;
        for(int i=0;i<n;i++){
            int si,pi,vi;
            cin >> si >> pi >> vi;
            s.push_back(si);
            p.push_back(pi);
            v.push_back(vi);  
        }
        int max=(p[0]/(s[0]+1))*v[0];
        for(int i=0;i<n;i++){
            if(max<(p[i]/(s[i]+1))*v[i]) {
                max=(p[i]/(s[i]+1))*v[i];
            }
        }
        printf("%d\n",max);
    }
}