#include<bits/stdc++.h>
 
#define pb push_back
#define mp make_pair 
#define fr first
#define sc second
#define sz(x) x.size()
#define rep(n) for (i = 0; i < n; i++)
#define repc(m,n) for (i = m; i < n; i++)
#define all(v) v.begin(), v.end()
#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))

using namespace std;
 


// Some typedef's
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;

ll gcd(ll a,ll b){ return a%b==0?b:gcd(b,a%b);}
void solvet()
{
	ll t;
	cin>>t;
	ll all=0;
	while(t--)
	{
		ll n,k,i,j,m=0;
		cin>>n>>k;
		ll a[n];
		rep(n)
		{
			cin>>a[i];
			if(a[i]!=1 and k%a[i]!=0 and m==0)
			{
				m=a[i];
				// cout<<"REgrae";
			}
		}
		ll m1=0;
		if(m==0)
		{
			ll  tp=0;
			for(i=0;i<n;i++)
			{
				if(a[i]==1)
					continue;	
				for(j=i+1;j<n;j++)
				{
					if(a[j]==1)
						continue;
					if(a[j]%a[i]!=0 and a[i]%a[j]!=0)
					{
						m=a[i];
						m1=a[j];
						tp=1;
						break;
					}
				}
				if(tp==1)
					break;
			}
			if(m1==0)
				cout<<"NO";	
			else
			{
				cout<<"YES ";
				if(m<m1)
				{
					for(i=0;i<n;i++)
					{
						if(m==a[i])
						{
							cout<<(k-m1)/m+1<<" ";
						}
						else if(m1==a[i])
						{
							cout<<"1 ";
						}
						else
							cout<<"0 ";
					}
				}
				else
				{
					for(i=0;i<n;i++)
					{
						if(m1==a[i])
						{
							cout<<(k-m)/m1+1<<" ";
						}
						else if(m==a[i])
						{
							cout<<"1 ";
						}
						else
							cout<<"0 ";
					}
				}
			}
		}



		
		else
		{
			cout<<"YES ";
			for(i=0;i<n;i++)
			{
				if(m==a[i])
				{
					cout<<k/m+1<<" ";
				}
				else
					cout<<"0 ";
			}
		}
		cout<<"\n";
	}
}
void solve()
{
	ll n,a,b,k,i,j;
    cin>>n>>a>>b>>k;
    
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	solvet();
	// solve();
	return 0;
}