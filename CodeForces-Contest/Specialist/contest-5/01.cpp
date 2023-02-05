#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n;
    cin>>n;
  if(n%2==1)
  {
    cout<<"-1"<<endl;
  }
else 
{
    cout<<n/2<<" "<<1<<endl;
}
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