#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
long long binPow(long long n,long long m)
{
    if(m==0) return 1;
    long long res = binPow(n,m/2);
    if(m%2)
    {
        return res*res*n;
    }
    else 
    {
        return res*res;
    }
}
void solve()
{
    long long n,m;
    cin>>n>>m;
    long long ans = binPow(2,n);
    ans = ans%mod;
    ans = ans%mod;
    cout<<(m%ans)%mod<<endl;

}
int main()
{

   
        solve();
    


    return 0;
}