#include<bits/stdc++.h>
using namespace std;
string solve(vector<int> ret){
    int index=0;
    // cout << ret.size() << endl;
    // cout << ret[ret.size()+1] << endl;
    while(index!=ret.size()){
        // cout << index << endl;
        if(ret[index]==0) index++;
        else{
            index++;
            // cout << index << endl;
            if(index==ret.size()) return "YES";
            for(int i=1;i<6;i++){
                if(ret[index]==1) return "NO";
                index++;
                if(index == ret.size()) return "YES";
            }
        } 
    }
    return "YES";
}
int main(){
    int test;
    cin >> test;
    for(int i=0;i<test;i++){
        int n;
        cin >> n;
        vector<int> ret;
        ret.clear();
        for(int j=0;j<n;j++){
            int tmp;
            cin >> tmp;
            ret.push_back(tmp);
        }
        cout << solve(ret) << endl;
    }
}