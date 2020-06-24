#include<bits/stdc++.h>
using namespace std;
int solve(vector<vector<int>> &arr,int r1,int c1,int r2,int c2){
    if(r1<0 || r1>arr.size()) return 0;
    if(r2<0 || r2>arr.size()) return 0;
    if(c1<0 || c1>arr.size()) return 0; 
    if(c2<0 || c2>arr.size()) return 0;
    cout << "1" << " " << r1 << " " << c1 << " " << r2 << " "<< c2 << endl;
    fflush(stdout);
    int result;
    cin >> result;
    if(result==0) return 0;
    else if(result==-1) raise(SIGINT);
    if(r1==r2 && c1==c2) {
        arr[r1-1][c1-1]=result;
        return result;
    }
    int tmp=result;
    // int num_elements = (r2-r1+1)*(c2-c1+1);
    // num_elements -= (-min(r2,r1)+min(r2,(r1+r2)/2)+1)*(-min(c2,c1)+min(c2,(c1+c2)/2)+1);
    result -= solve(arr,min(r2,r1),min(c2,c1),min(r2,(r1+r2)/2),min(c2,(c1+c2)/2));
    if(result==0) return tmp; 
    // num_elements -= (-min(r2,(r1+r2)/2+1)+min(r2,r2)+1)*(min(c2,c2)-min(c2,(c1+c2)/2+1)+1);
    result -= solve(arr,min(r2,(r1+r2)/2+1),min(c2,(c1+c2)/2+1),min(r2,r2),min(c2,c2)); //4
    if(result==0) return tmp;
    // num_elements -= (-min(r2,r1)+min(r2,(r1+r2)/2)+1)*(-min(c2,(c1+c2)/2+1)+min(c2,c2)+1);  
    result -= solve(arr,min(r2,r1),min(c2,(c1+c2)/2+1),min(r2,(r1+r2)/2),min(c2,c2)); //2
    if(result==0) return tmp;
    // int num_elements = (min(r2,r2)-min(r2,(r1+r2)/2+1)+1) * (min(c2,(c1+c2)/2)-min(c2,c1)+1);
    // if(num_elements==1) arr[r2-1][min(c2,c1)-1]=result; 
    result -= solve(arr,min(r2,(r1+r2)/2+1),min(c2,c1),min(r2,r2),min(c2,(c1+c2)/2)); //3
    if(result==0) return tmp;
}
void print(vector<vector<int>> arr){
    cout << 2 << endl;
    fflush(stdout);
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr.size();j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
        fflush(stdout);
    }
}
int main(){
    cin.tie(NULL);
    cin.sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int n,p;
        cin >> n >> p;
        vector<vector<int>> arr(n,vector<int>(n,0));
        solve(arr,1,1,n,n);
        print(arr);
        int tmp;
        cin >> tmp;
        if(tmp==-1) return 0;
   }
}