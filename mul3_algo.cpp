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


int find(ll n){
    ll odd_c=0,eve_c=0;
    if(n==0){
        cout<<1<<endl;
        return 1;
    }
    else if(n==1){
        cout<<0<<endl;
        return 0;
    }
    else{
        while(n){
            if(n&1)
                odd_c++;
            if(n&2)
                eve_c++;
            n >>=2;
            
        }
        find(abs(odd_c - eve_c));
    }
        

}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    find(3);
    find(5);
    find(99);
    find(225);
    
    return 0;
}