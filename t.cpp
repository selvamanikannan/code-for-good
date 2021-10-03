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
typedef long double ld;
typedef unsigned long long ull;
typedef pair<ll, ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;

ll gcd(ll a,ll b){ return a%b==0?b:gcd(b,a%b);}
void solvet()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,m,i,j,orig=0;
		cin>>n>>m;
		vector<ll> lx,rx,ly,ry;
		map<ld,ll> mx,my;
		rep(n)
		{
			cin>>j;
			mx[j]=1;
			if(j<0)
			{
				lx.pb(j);
			}
			else if(j==0)
			{
				orig=1;
			}
			else
			{
				rx.pb(j);
			}
		}
		rep(m)
		{
			cin>>j;
			my[j]=1;
			if(j<0)
			{
				ly.pb(j);
			}
			else if(j==0)
			{
				orig=2;
			}
			else
			{
				ry.pb(j);
			}
		}
		// ll a=10;
		// cout<<(long double)a/(long double)3<<"   ";
		ll res=0;
		if(orig==1)
			res+=(n-1)*m;
		else if(orig==2)
			res+=n*(m-1);
		sort(all(lx));
		sort(all(ly));
		sort(all(rx));
		sort(all(ry));
        for (auto x:lx)
            cout<<x<<" ";
        cout<<"\n";
        for (auto x:ly)
        cout<<x<<" ";
        cout<<"\n";
        for (auto x:rx)
         cout<<x<<" ";
        cout<<"\n";
        for (auto x:ry)
            cout<<x<<" ";
        cout<<"\n";
		long double tp;
		if(lx.size()>0 and rx.size()>0 and(ly.size()>0 or ry.size()>0))
		{
			for(i=0;i<lx.size();i++)
			{
				for(j=0;j<rx.size();j++)
				{
					// cout<<(double)( pow(rx[j]-lx[i],2) - pow(rx[j],2) - pow(lx[i],2) )/(double)2<<" ";
					tp=sqrt((long double)( pow(rx[j]-lx[i],2) - pow(rx[j],2) - pow(lx[i],2) )/(long double)2);
					if(my[tp]==1)
						res++;
					if(my[-tp]==1)
						res++;
				}
			}
		}
		// cout<<tp<<" ";
		// cout<<res<<" ";
		if(ly.size()>0 and ry.size()>0 and(lx.size()>0 or rx.size()>0))
		{
			for(i=0;i<ly.size();i++)
			{
				for(j=0;j<ry.size();j++)
				{
					tp=sqrt((long double)( pow(ry[j]-ly[i],2) - pow(ry[j],2) - pow(ly[i],2) )/(long double)2);
					if(mx[tp]==1)
						res++;
					if(mx[-tp]==1)
						res++;
				}
			}
		}
		cout<<res<<"\n";
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