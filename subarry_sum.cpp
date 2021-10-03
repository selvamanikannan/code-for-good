#include<bits/stdc++.h>
using namespace std;

#define PB push_back  
#define MP make_pair  
#define SZ(v) ((int)(v).size())  
#define FOR(i,a,b) for(int i=(a);i<(b);++i)  
#define REP(i,n) FOR(i,0,n)  
#define FORE(i,a,b) for(int i=(a);i<=(b);++i)  
#define REPE(i,n) FORE(i,0,n)  
#define FORSZ(i,a,v) FOR(i,a,SZ(v))  
#define REPSZ(i,v) REP(i,SZ(v))  
typedef long long ll; 


int maxSum(vector<ll> arr, ll x, ll n){
    ll c_sum=arr[0],st=0,f=1;

    for(ll i=1;i<=n;i++){
        while(c_sum > x and st < i-1)
            c_sum = c_sum - arr[st++];
        if(c_sum == x){
            cout<<st+1<<" "<<i<<endl;
            return 0;
        }
        if(i<n)
            c_sum+=arr[i];
    }
    cout<<"-1"<<endl;
}


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n=0,x=0,get;
        cin>>n>>x;
        vector<ll> arr;
        for(int i=0;i<n;i++){
            cin>>get;   
            arr.PB(get);
        }
        maxSum(arr,x,n);        
    }
    return 0;
}