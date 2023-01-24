#include <bits/stdc++.h>
using namespace std;
void solve()
{

long long n,m;
cin>>n>>m;
if(m==0)
{
    cout<<1<<endl;
}
else{
cout<<min(m,n-m)<<endl;
}
}
int main()
{
   
        solve();
    
    return 0;
}