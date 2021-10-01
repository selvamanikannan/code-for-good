#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
	ll n;
	cin>>n;
	int f = 0;
	ll arr[n+1];
	ll poor[n+1];
	ll hash[n+1];
	for(ll i=0;i<n;i++){
		cin>>arr[i];
		poor[i] = arr[i];
		hash[arr[i]]=1;
	}


	queue <ll> q; 
	for(ll i=1;i<=n;i++){
		if(hash[i]!=1)
			q.push(i);
	}

	// ll temp=0;
	queue <ll> q1= q;


	// while(!q1.empty()){
	// 	cout<<q1.front()<<" ";
	// 	q1.pop();
	// }
	// cout<<endl;

	for(ll i=n-1;i>=0;i--){
		if(arr[i]==0){
			arr[i] = q.front();
			q.pop();

			if(arr[i]==i+1){
				if(q.empty()){
					f=1;
					break;
				}
				q.push(arr[i]);
				arr[i] = q.front();
				q.pop();
			}
		}
	}

	if(f==1){
		for(ll i=0;i<n;i++){
			// cout<<"vann"<<endl;
			if(poor[i]==0){
				poor[i] = q1.front();
				q1.pop();
				if(q1.empty()){
					f=1;
					break;
				}
				if(poor[i]==i+1){
					q1.push(poor[i]);
					poor[i] = q1.front();
					q1.pop();
				}
			}
	}
	}


	if(f==0){
		for(ll i=0;i<n;i++)
			cout<<arr[i]<<" ";
	}
	else{
		for(ll i=0;i<n;i++)
			cout<<poor[i]<<" ";
	}

	
}