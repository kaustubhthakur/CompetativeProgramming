#include <bits/stdc++.h>
using namespace std;
void solve()
{

    long long a,b,n,m;
    cin>>a>>b>>n>>m;
    long long  dx = n/(m+1);
    long long dy = n-dx*(m+1);
 cout<<  (long long) (dx*min(a*m,b*(m+1))+dy*min(a,b))<<endl;
}
int main()
{


int t;
cin>>t;
while(t--)
{
    solve();
}



    return 0;
}