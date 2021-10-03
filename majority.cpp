#include<bits/stdc++.h>
using namespace std;

int findCand(vector<int> v){
    int count=1;
    int sol = 0;
    for(int i=0;i<v.size();i++){
         if(v[sol]==v[i])
          count++;
        else
            count--;
        if(count==-1){
            count++;
            sol=i;
        }
    }
    return v[sol];
}

bool checkBack(vector<int> v,int x){
    int ct=0;
    for(int i : v){
        if(i==x)
            ct++;
    }
    if(ct>v.size()/2)
        return true;
    else
        return false;
}


int main(){
  int  t;
  cin>>t;
  while(t--){
      int n,get;
      cin>>n;
      vector<int> v;
      for(int i=0;i<n;i++){
          cin>>get;
          v.push_back(get);
      }
      int y = findCand(v);
      if(checkBack(v,y))
        cout<<y<<endl;
      else
        cout<<"-1\n";
  }
}