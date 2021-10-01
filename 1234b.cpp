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

    ll l,win;
    cin>>l>>win;
    ll arr[l+1];

    queue <ll> q; 
    set<ll> s;

    for(ll i=0;i<l;i++)
        cin>>arr[i];
 
    for(ll i=0;i<l;i++){
            if(!s.count(arr[i])){
                if(s.size()<win){
                    s.insert(arr[i]);
                    q.push(arr[i]);
                }
                else{
                    s.erase(q.front());
                    q.pop();
                    q.push(arr[i]);
                    s.insert(arr[i]);
                }
            } 
    }

    cout<<q.size()<<"\n";
    vector<int> v;
    while(!q.empty()){
        v.push_back(q.front());
        q.pop();
    }
    for(auto it=v.rbegin();it!=v.rend();it++)
        cout<<*it<<" "; 
    
    return 0;
}