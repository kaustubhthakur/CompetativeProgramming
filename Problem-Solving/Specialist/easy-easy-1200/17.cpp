#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,b,c;
    cin>>n>>b>>c;
    if(b+c+2<=n || n==c && n==b && c==b)

    {
cout<<"yes"<<endl;
    }
    else 
    {
        cout<<"No"<<endl;
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