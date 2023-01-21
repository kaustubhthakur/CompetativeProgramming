#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
int fact(int n)
{
    if(n==0 || n==1) return 1;
    
    else return n*fact(n-1);
}
int main()
{

int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
  if(n==1)
  {
    cout<<0<<endl;
  }
  else 
  {
    cout<<n*(n-1)*(n-2)*(n-3)+1<<endl;
  }
}
    return 0;
}