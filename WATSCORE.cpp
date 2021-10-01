#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;

	while(t--){
		int n,x,y,sum=0;
		cin>>n;
		map<int,int> m;
		
		while(n--){
			cin>>x>>y;
			if(x<9 and m[x]<y)
				m[x]=y;
		}
		for(int i=1;i<=8;i++)
			sum+=m[i];
		cout<<sum<<endl;
	}
}