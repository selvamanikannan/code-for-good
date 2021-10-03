#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,d,get;
		cin>>n>>d;
		vector<int> arr;
		for(int i=0;i<n;i++){
			cin>>get;
			arr.push_back(get);
		}

		rotate(arr.begin(), arr.begin()+d, arr.end());
		//d=d%n;
		// for(int i=d;i<n;i++)
		// 	cout<<arr[i]<<" ";
		// for(int i=0;i<d;i++)
		// 	cout<<arr[i]<<" ";
		// cout<<"\n";
		for(auto x:arr)
			cout<<x<<" ";
		cout<<"\n";
	}
	return 0;
}
