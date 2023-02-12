#include <bits/stdc++.h>
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
int main()
{

int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    int maxi =INT_MIN;
    for(int i=1;i<=n;i++)
    {
        maxi = max(maxi,gcd(i,i+1));
    }
    cout<<maxi<<endl;
}

    return 0;
}