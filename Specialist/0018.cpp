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
void solve()
{
int n,l,r;
cin>>n>>l>>r;
vector<int>a;

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