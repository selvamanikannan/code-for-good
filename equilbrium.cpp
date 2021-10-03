#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,f=0;
		cin>>n;
		int arr[n];
		cin>>arr[0];
		for(int i=1;i<n;i++) {
			cin>>arr[i];
			arr[i]+=arr[i-1];
		}
		if(n==1){
			cout<<"1\n";
			f=1;
		}
		else{
			for(int i=1;i<n;i++){
				if(arr[i-1]==arr[n-1]-arr[i]){
					cout<<i+1<<"\n";
					f=1;
					break;
				}

			}
		}	
		if(f==0) cout<<"-1\n";
	}
	return 0;
}