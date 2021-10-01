#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
	ll t;
	cin>>t;
	while(t--){
		ll a,b;
		cin>>a>>b;
		if(a%b==0)
			cout<<a<<endl;
		else{
			cout<<(((ll)a/b)*b)+(min((ll)floor(b/2),(ll)a%b))<<endl;
		}

	}
}