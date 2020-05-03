#include<iostream>
#include<string>
#include<unordered_map>
#include<ctype.h>
using namespace std;
int main(){
    int t;
    unordered_map<char,char> mp;
    cin >> t;
    string ret;
    cin >> ret;
    for(int i=0;i<ret.size();i++){
        mp['a'+i]=ret[i];
    }
    for(int i=0;i<t;i++){
        string ret;
        cin >> ret;
        for(int i=0;i<ret.size();i++){
            if(ret[i]>='a' && ret[i] <='z'){
                ret[i]=mp[ret[i]];
            }
            else if(ret[i]>='A' && ret[i]<='Z'){
                ret[i]=toupper(mp[tolower(ret[i])]);
                // cout << '1' << ret[i] << endl;
            }
            else if(ret[i]=='_') ret[i]=' ';
            else continue;
        }
        printf("%s\n",ret.c_str());
    }
}