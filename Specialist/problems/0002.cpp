#include <bits/stdc++.h>
using namespace std;
const int N = 1e9+7;
long long fact(long long n)
{
    if(n==0 || n==1) return 1;

    return n*fact(n-1);
}
void solve()
{
    int n;
    cin>>n;
    int denoa = fact(n+1);
    int denob = fact(n);
    int numo = fact(2*n);
    int deno = denoa*denob;
    long long ans = numo/deno;
    ans = ans%N;
    cout<<ans<<endl;
    
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