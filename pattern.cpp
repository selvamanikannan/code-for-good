#include<bits/stdc++.h>
using  namespace std;

int main()
{
	int n,st,en,j;
	cin>>n;

	for(int i=0;i<(2*n)-1;i++)
		cout<<"*";
	cout<<"\n";


	for(int i=1;i<n;i++){
		for(j=0;j<n-i;j++)
			cout<<"*";
		for(j=0;j<=i-1;j++)
			cout<<" ";
		for(j=0;j<n-i;j++)
			cout<<"*";
		cout<<endl;
	}

	for(int i=n-2;i>0;i--){
		for(j=0;j<n-i;j++)
			cout<<"*";
		for(j=0;j<=i;j++)
			cout<<" ";
		for(j=0;j<n-i;j++)
			cout<<"*";
		cout<<endl;
	}

	for(int i=0;i<(2*n)-1;i++)
		cout<<"*";
	cout<<"\n";

	return 0;
}