#include<bits/stdc++.h>
#define ll long long int
using namespace std;
#define MAXN 1000001 

int getFactorization(ll x) 
{ 
	int cnt = 0;
	while (x%2 == 0) 
	{ 
	    cnt++;
	    x = x / 2; 
	} 
	
	for(int i = 3 ; i <= sqrt(x) ; i += 2)
	{
	    while(x%i == 0)
	    {
	        cnt++;
	        x /= i;
	    }
	}
	
	if(x > 1) cnt++; //agar prime hai to sahi hai why to go for unnecessary computation
	
	return cnt;
} 

int main(){
	int q;
	cin>>q;
	assert(q >= 1 && q <= 1000);
	while(q--){
	    int x,k;
	    cin>>x>>k;
	    assert(x >= 1 && x <= 1000000000);
	    assert(k >= 1 && k <= 1000000000);
	    int cnt = getFactorization(x);
	    if(cnt >= k) cout<<"1"<<endl;
	    else cout<<"0"<<endl;
	}
}