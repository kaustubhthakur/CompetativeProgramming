#include <bits/stdc++.h>
using namespace std;
void solve()
{


  int a[2][2];
  for(int i=0;i<2;i++)
  {
    for(int j=0;j<2;j++)
    {
        cin>>a[i][j];
    }
  }
  int sum =0;
  for(int i=0;i<2;i++)
  {
    for(int j=0;j<2;j++)
    {
        sum +=a[i][j];
    }
  }
  if(sum==0)
  {
    cout<<0<<endl;

  }
  else if(sum ==4)
  {
    cout<<2<<endl;
  }
  else 
  {
    cout<<1<<endl;
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