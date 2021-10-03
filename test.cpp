#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {
    ios::sync_with_stdio(false);cin.tie(0);
    int n;
    cin>>n;
    vector<pair<int,int> > v(n);
    for(int i=0;i<n;i++) {
        cin>>v[i].first;
        v[i].second = i+1;
    }
    sort(v.rbegin(), v.rend());
    // reverse(v.begin(), v.end()); 
    // sort(v.begin(),v.end());

    int ans = 0;
    for(int i=0;i<n;i++) {
        ans += v[i].first*i+1;
    }
    cout<<ans<<'\n';
    for(int i=0;i<n;i++) {
        cout<<v[i].second<<" ";
    }
    return 0;
}