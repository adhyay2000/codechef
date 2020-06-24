#include<bits/stdc++.h>
using namespace std;
void solve(vector<int> &ret){
    int size=ret.size();
    for(int i=0;i<size-2;i++){
        for(int j=i+2;j<size;j++){
            if(ret[i]>ret[j]){
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin >> test;
    for(int i=0;i<test;i++){
        int size=0;
        cin >> size;
        // cout << "aditya" << endl;
        vector<int> ret;
        ret.clear();
        for(int i=0;i<size;i++){
            int tmp;
            cin >> tmp;
            ret.push_back(tmp);
        }
        solve(ret);
    }
}