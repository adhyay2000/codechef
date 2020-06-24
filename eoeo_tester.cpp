#include<bits/stdc++.h>
using namespace std;
bool play(int ts,int js){
    if(ts%2==0 && js%2==0) return play(ts/2,js/2);
    else if(ts%2==1 && js%2==1) return false;
    else if (ts%2==0 && js%2==1) return false;
    else return true;
}
int solve(int tmp){
    int count=0;
    for(int i=1;i<=tmp;i++){
        if(play(tmp,i)) {
            count++;
        } 
    }
    return count;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int tmp;
        cin >> tmp;
        cout << "for" << tmp << "answer is:" << solve(tmp) << endl;
    }
}