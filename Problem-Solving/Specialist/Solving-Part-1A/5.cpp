#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    
    if (a == 0)
       return b;
    if (b == 0)
       return a;
  
    if (a == b)
        return a;
  
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

void solve()
{
    int n;
    cin>>n;
    cout<<n/3<<" "<<n/2<<" "<<gcd(n/2,n/3)<<endl;
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