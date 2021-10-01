#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main(){
	ll t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=0;i<n;i++){
    		for(int j=n;j>0;j--){
        		for(int k=0;k<n-i;k++)
            		cout<<j<<" ";
    		}
    		cout<<"$";
        
    	}
    	cout<<"\n";	
	}
}