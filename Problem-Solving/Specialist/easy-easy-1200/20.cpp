#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t, i, j, ans, n;
    
    cin>>t;
    
    for(;t--;)
    {
        cin>>n;
        
        ll a[n];
        bool v[n];
        
        for(i=0; i<n; i++){
            cin>>a[i];
        }
        
        sort(a, a+n);
        
        for(i=0; i<n; i++)
        {
            if(i>=a[i]){
                v[i]=true;
            }else{
                v[i]=false;
            }
        }
        
        ans=0;
        
        for(i=0; i<n; i++)
        {
            if(v[i]==true){
                if(i==0){
                    ans++;
                }else if(v[i-1]==false){
                    ans++;
                }
            }
        }
        
        if(a[0]>0){
            ans++;
        }
        
        cout<<ans<<"\n";
        
        
    }
}