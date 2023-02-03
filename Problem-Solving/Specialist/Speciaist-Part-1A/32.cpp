#include <bits/stdc++.h>
using namespace std;
void solve()
{

   long long a,b,c,d;
   cin>>a>>b>>c>>d;
   if(a==0)
   {
    cout<<1<<endl;
   }
   else 
   {
cout<<a+min(b,c)*2+min(a+1,abs(b-c)+d)<<endl;
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