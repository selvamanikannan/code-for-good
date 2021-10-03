#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x, n,get,flag=0;
        unordered_map<int, int> um; 
        vector<int> arr;
        cin>>n>>x;
        for(int i=0;i<n;i++){
            cin>>get;
            if(get<x){
                arr.push_back(get);
                auto it=um.find(get);
                if(it==um.end())
                    um.insert({get,1});
                else
                    it->second++;
            }
        }

        for(int i=0;i<arr.size();i++){
            int ind=x-arr[i];
            auto it = um.find(ind);
            if( it == um.end())
                continue;
            else{
                if(ind == arr[i])
                    it->second--;
                if(it->second>0){
                    flag=1;
                    cout<<"Yes\n";
                    break;
                }
                if(ind == arr[i])
                    it->second++;
            

            }
        }
        if(!flag)
            cout<<"No\n";
    }
}