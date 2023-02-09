#include <bits/stdc++.h>
using namespace std;
void solve()
{
int n,m;
cin>>n>>m;


for(int i=1;i<=n;i++)
{
    for(int j=1;j<=m;j++)
    {
          cout<<((i%4<=1)!=(j%4<=1))<<" \n"[j==m];
    } 
   
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