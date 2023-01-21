#include <bits/stdc++.h>
using namespace std;


/* n-> concert tickets
   m-> custormers arrive
  a[n] -> price of each tickets
  b[m] -> max price for each customer in the order they arrive 

testcase

5 3
5 3 7 8 5
4 8 3


0/p
3
8
-1
*/

void solve()
{
int n,m;
cin>>n>>m;

vector<int> a(n);
for(int i=0;i<n;i++) cin>>a[i];

vector<int> b(m);
for(int i=0;i<m;i++) cin>>b[i];
 int ans = 0;

 for(int i=0;i<m;i++)
 {
  for(int j=0;j<n;j++)
  {
if(a[j]==b[i])
{
  ans = a[j];
}
if(a[j]>a[i])
{
  ans = *lower_bound(a.begin(),a.end(),a[j]);
}
if(a[j]>b[i])
{
  ans = -1;
}
  }

   cout<<ans<<endl;
 }

}
int main()
{

  solve();
  return 0;
}