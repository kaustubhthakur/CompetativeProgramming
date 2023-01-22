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
int main()
{

    long long a,b;
    cin>>a>>b;
    long long ans = binPow(a,b);
    cout<<(ans%mod)%mod<<endl;

    return 0;
}