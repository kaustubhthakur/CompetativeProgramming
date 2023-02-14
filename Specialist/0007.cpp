#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    // Everything divides 0
    if (a == 0)
       return b;
    if (b == 0)
       return a;
  
    // base case
    if (a == b)
        return a;
  
    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}
void solve()
{
int n;
cin>>n;
vector<int>a(n);
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
int maxi =INT_MIN;
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=n;j++)
    {
        if(gcd(i,j)==1)

        {
            maxi = max(maxi,i+j);
            cout<<maxi<<endl;
            return;
          
        }
    }
}
cout<<-1<<endl;

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