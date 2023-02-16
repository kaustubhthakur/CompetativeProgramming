
#include<bits/stdc++.h>
using namespace std;
long long t,n,s,A,y,x;
int main()
{
cin>>t;
while(t--&&cin>>n)
{
s=1,A=y=0;
for(long long i=1;i<=n;i++)
{
cin>>x;
while(x%2==0)
s*=2,x/=2;
y=max(y,x),A+=x;
}
cout<<A+(s-1)*y<<'\n';
}
return 0;
}