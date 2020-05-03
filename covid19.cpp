#include<bits/stdc++.h>
using namespace std;
// void solve(vector<int> &ret,int &count,int index){
//     if(ret[index]>10) return;
//     ret[index] += 100*count;
//     if(index+1<ret.size() && ret[index+1]-ret[index]<=2) solve(ret,count,index+1);
//     else if(index+1>ret.size());
//     else if(ret[index+1]-ret[index]>2) {
//         count++;
//     }
//     if(index-1>=0 && ret[index]-ret[index-1]<=2) solve(ret,count,index-1);
//     else if(index-1<0);
//     else if(ret[index]-ret[index-1]>2) {
//         count++;
//     }
//     solve(ret,count,index+1);
// }
void solve(vector<int> ret){
    int max_n=0,min_n=INT_MAX;
    int count=0,index;
    for(int i=0;i<ret.size();i++){
        count=1;
        //if i infected
        //in left
        index = i;
        while(index+1<ret.size() && ret[index+1]-ret[index]<=2) {
            count++;
            index++;
        }
        //in right
        index = i;
        while(index-1>=0 && ret[index]-ret[index-1]<=2) {
            count++;
            index--;
        }
        // cout << count << endl;
        max_n = max(max_n,count);
        min_n = min(min_n,count); 
    }
    cout << min_n << " " << max_n << endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin >> test;
    for(int i=0;i<test;i++){
        int n;
        cin >> n;
        vector<int> ret;
        for(int i=0;i<n;i++){
            int tmp;
            cin >> tmp;
            ret.push_back(tmp);
        }
        solve(ret);
    }
}