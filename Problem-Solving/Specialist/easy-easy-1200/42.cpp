#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
long long binPow(long long a,long long b)
{
    if(b==0) 
    return 1;
    
    long  long res = binPow(a,b/2);
    if(b%2)
    {
        return res*res*a;
    }
    else 
    {
        return res*res;
    }
}
void solve()
{
    long long n;
    cin>>n;
    int b = 2*n-2;
    long long ans = binPow(n,b);
    cout<<n*b*2<<endl;
}
int main()
{

   solve();

    return 0;
}