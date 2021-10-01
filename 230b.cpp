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
int gcd(int a,int b) { return b==0?a:gcd(b,a%b); }	


void swap(int *a,int *b){
	int c= *b;
	*b=*a;
	*a=c;
}


double pow(long long x,long long y){
	if (x==0)
		return 1;
	ll temp=pow(x,y/2);
	if(temp%2==0)
		return temp*temp;
	else
		return x*temp*temp;
}



int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n=1000009;
    bool prime[n+1]; 
    memset(prime, true, sizeof(prime)); 
    for (int p=2; p*p<=n; p++) 
    { 
            if (prime[p] == true) 
        { 
            for (int i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
    prime[0]=prime[1]=false;


    ll len;
    cin>>len;
    while(len--){
    	ll input;
    	cin>>input;
    	double root=pow(input,0.5);
    	if((int)root==root){
    	   	if(prime[(int)root])
    	   		cout<<"YES\n";
    	   	else
    	   		cout<<"NO\n";
    	}    	
    	else{
    		cout<<"NO\n";
    	}
    }
}