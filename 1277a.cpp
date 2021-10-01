#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n=0,m=0,cnt=0;
		cin>>n;
		for(ll i=1;i<10;i++){
			m=0;
			for(ll j=1;j<10;j++){
				m=m*10+i;
				if(m<=n)cnt++;
			}
		}
		cout<<cnt<<endl;
	}
}