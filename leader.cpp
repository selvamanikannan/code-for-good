#include<bits/stdc++.h> 
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,get;
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++){
            cin>>get;
            v.push_back(get);
        }

        vector<int> v2(n,-1);
        v2[n-1] = v[n-1];
        int lm=n-1;
        for(int i=n-2;i>-1;i--){
            if(max(v2[lm],v[i])==v[i]){
                v2[i] = v[i];
                lm=i;
            }
            else
                v2[i] = -1;
        }

        for(int x : v2)
            if(x!=-1)cout<<x<<" ";
        cout<<endl;      
    }
}