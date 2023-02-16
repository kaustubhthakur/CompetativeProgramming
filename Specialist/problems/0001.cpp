
#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll gcd(ll a, ll b)
{
    if((a%b)==0){
        return b;
    }else{
        return gcd(b, a%b);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t, n, i, j, ans;
    
    cin>>t;
    
    for(;t--;)
    {
        ans=1;
        
        cin>>n;
        
        ll a[n];
        
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        
        ll pre[n], suff[n];
        
        pre[0]=a[0];
        suff[n-1]=a[n-1];
        
        for(i=1; i<n; i++){
            pre[i]=pre[i-1]+a[i];
        }
        
        for(i=n-2; i>=0; i--){
            suff[i]=suff[i+1]+a[i];
        }
        
        for(i=0; i<n-1; i++)
        {
            ans=max(ans, gcd(max(pre[i], suff[i+1]), min(pre[i], suff[i+1])));
        }
        
        cout<<ans<<"\n";
    }
}