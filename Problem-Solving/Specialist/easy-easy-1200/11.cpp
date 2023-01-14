#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t, n, ans, op, i, j, sum;
    
    cin>>t;
    
    while(t--)
    {
        cin>>n;
        
        sum=0;
        
        ll a[n];
        
        for(i=0; i<n; i++){
            cin>>a[i];
            sum+=a[i];
        }
        
        if((sum%2)==0){
            cout<<"0\n";
            continue;
        }
        
        ans=100000;
        
        for(i=0; i<n; i++)
        {
            op=0;
            j=a[i];
            
            while((a[i]%2)==(j%2)){
                op++;
                j/=2;
            }
            
            ans=min(ans, op);
        }
        
        cout<<ans<<"\n";
    }
    return 0;
}