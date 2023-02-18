#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
long long binpow(long long a, long long b) {
    if (b == 0)
        return 1;
    long long res = binpow(a, b / 2);
    if (b % 2)
        return res * res * a;
    else
        return res * res;
}
void solve()
{


long long a,n;
cin>>a>>n;

long long ans = binpow(a,n);
ans = ans%mod;
cout<<ans%mod<<endl;

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