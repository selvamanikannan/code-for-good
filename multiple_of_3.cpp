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
    ll t;
    string st;
    cin>>t;
    while(t--){
        cin>>st;
        ll odd_ct=0,even_ct=0;
        for(ll i=0;i<st.length();i++){
            if(st[i]=='1'){
                if(i&1)
                    odd_ct++;
                else
                    even_ct++;
            }
        }
        if(abs(odd_ct-even_ct)%3==0)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
    
    
    return 0;
}