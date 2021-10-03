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

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,get;
    cin>>t;
    vector<ll> arr;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>get;
            arr.push_back(get);
        }
        ll max_so=arr[0],ct_max=0,st=0,en=0,s=0;
        
        for(int i=0;i<n;i++){
            ct_max+=arr[i];
            if(max_so<ct_max){
                max_so = ct_max;
                st=s+1;
                en=i;
            }
            if(ct_max<0){
                ct_max=0;
                s=i;
        }   
    }
    cout<<max_so<<endl;
    arr.clear();
}
}   