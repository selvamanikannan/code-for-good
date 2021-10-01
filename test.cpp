#include<bits/stdc++.h>
using namespace std;

void printa(int a[],int n){
    cout<<"ee\n";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){
int t,f;
cin>>t;
while(t--){
    string s;
    cin>>s;
    int n=s.size();
    int a[n]={0};
    for(int i=0;i<n;i++){
            //cout<<i-48-s[i]<<" "<<i+(48-s[i])<<" "<<n<<endl;
            if(s[i]!='.'){
                for(int j=max(0,i-(s[i]-'0'));j<min(n,i+1+(s[i]-'0'));j++){
                        //cout<<i-(s[i]-'0')<<" "<<i+1+(s[i]-'0')<<" "<<n<<endl;
                        if(a[j]==0){
                            a[j]=1;
                        }

                        else{
                            f=1;
                            break;
                        }
                        if(f==1)
                            break;
                }
                //printa(a,n);
            }
    }
if(f==1)
    cout<<"unsafe"<<endl;
else
    cout<<"safe"<<endl;
}
return 0;
}

