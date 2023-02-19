#include <bits/stdc++.h>
using namespace std;
int main()
{


int t;
cin>>t;
while(t--)
{
    int n,m;
    cin>>n>>m;
    if(n==1 && m==1)
    {
        cout<<0<<endl;
    }
   else
    {
        int ans = (n-1)+(m-1) +min(n,m);
        cout<<ans<<endl;
    }
}


    return 0;
}