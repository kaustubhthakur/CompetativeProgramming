#include <bits/stdc++.h>
using namespace std;
void solve()
{
   int n;
   cin>>n;
   int a[1000],b[1000];
int cnt =0;
for(int i=0;i<n;i++)
{
cin>>a[i]>>b[i];
if(a[i] <a[i+1] && b[i]<b[i+1])
{
    cnt++;
}

}
    cout<<cnt<<endl;
}
int main()

{
    
          solve();
    
  
}