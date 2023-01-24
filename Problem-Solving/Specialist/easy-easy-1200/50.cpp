#include<bits/stdc++.h>
using namespace std;
long long  i,j,k,n,m,t;
int main()
{
cin>>t;
while(t--)
{
cin>>n>>m;
m-=n; int a[n];
for(int i=0;i<n;i++)
{
cin>>a[i];
m-=a[i];
}
sort(a,a+n);
m-=a[n-1];
m+=a[0];
cout<<((m<0)?"NO":"YES")<<endl;
}
return 0;
}
