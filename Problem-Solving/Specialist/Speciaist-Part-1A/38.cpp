#include <bits/stdc++.h>
using namespace std;
void solve()
{
int n,m,dx,dy,d;
cin>>n>>m>>dx>>dy>>d;
if(min(dx-1,m-dy)<=d && min(n-dx,dy-1)<=d)
{
    cout<<"-1"<<endl;
}
else 
{
    cout<<n+m-2<<endl;
}




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


