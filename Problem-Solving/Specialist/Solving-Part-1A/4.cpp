#include <bits/stdc++.h>
using namespace std;
void solve()
{
   int a,b;
   cin>>a>>b;
   if(a==1 || b==1)
   {
    cout<<a<<" "<<b<< endl;
   }
   else 
   {
cout<<a-1<<" "<<2<<endl;
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

    return 0 ;

}