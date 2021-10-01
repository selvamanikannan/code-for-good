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
 
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll m,n;
    cin>>n>>m;
    int arr[n][m];
    for (int i = 0; i <n; ++i) {
        for(int j=0;j<m;j++)
            cin>>arr[i][j];
    }
    for(int =0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j] and arr[i][j+1] and arr[i+1][j] and arr[i+1][j+1] == 1)
        }
    }
}