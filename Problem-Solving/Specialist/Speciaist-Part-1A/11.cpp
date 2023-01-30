#include <bits/stdc++.h>     
using namespace std;
#define ll long long
void solve(){
    ll n; cin>>n;
    ll sum=0,ans=0;
    vector<ll> a(n),b(n);
    for(auto &it:a){
        cin>>it;
        sum+=it;
    }
    for(auto &it:b){
        cin>>it;
        sum-=it;
    }
    for(ll i=0;i<n;i++){
        ans+=(a[i]^b[i]);
    }
    ans=min(ans,1+abs(sum));
    cout<<ans<<"\n";
}
int main()                                                                                
{  
    ios_base::sync_with_stdio(false);                         
    cin.tie(NULL);  
    ll t; cin>>t;
    while(t--){
        solve();
    }
}  