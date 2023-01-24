#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int> a(n);
  for(int i=0;i<n;i++) {cin>>a[i];
  
  }
  int cnt=0;
  for(int i=0;i<n;i++)
  {
    if(a[i]==1)
    {
        cnt++;
    }
  }
  int sol = n-cnt;
if(cnt%2!=0)
{
    sol++;
}
cout<<sol+cnt/2<<endl;
 
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