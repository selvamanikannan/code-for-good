#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,get,ind=-1,sol=0,maxi;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}


	for(int i=0;i<n;){
		if(i==n-1)
			break;
		maxi=arr[i];
		ind=i;
		for(int j=i+1;j<n;j++){
			if(maxi<=arr[j]){
				maxi=arr[j];
				ind=j;
				cout<<maxi<<"mm"<<endl;
				break;
			}	
			else if(j==n-1)
				ind=i+1;
		}
		for(int j=i+1;j<ind;j++){
			cout<<arr[i]-arr[j]<<endl;
			sol+=arr[i]-arr[j];
			}

		i=ind;
		cout<<i<<endl;
	}
	cout<<sol<<endl;
}