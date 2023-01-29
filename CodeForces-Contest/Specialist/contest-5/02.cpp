#include <bits/stdc++.h>
using namespace std;
void solve()
{
       long long n;
    cin>>n;
 set<int> res;
    for(int i=2;i*i<=n;i++)
    {
        while(n%i==0)
        {
           res.insert(i);
            n=n/i;
        }
    }
   if(n>1)
   {
    res.insert(n);
   }
   long long prod=1;
   for(auto ans :res)
   {
    prod = prod * ans;
   }
   cout<<prod<<endl;

}
int main()
{

    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        solve();
    }

    return 0;
}