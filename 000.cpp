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
    int t;
    cin>>t;
    while(t--){
    	ll l,da;
    	cin>>l;
    	ll sum=0;
    	for(int i=0;i<l;i++){
    		cin>>da;
    		sum+=da;
    	}
    	if(!(sum%l))
    		cout<<(sum/l)<<endl;
    	else    	
    		cout<<(sum/l)+1<<endl;
 
    }
    
    return 0;
}