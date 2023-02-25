//Exponentitation-I is easy version of exponentiation-II 
#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
long long binPow(long long a,long long b)
{
 long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = (res * a)%mod;
        a = (a * a)%mod;
        b >>= 1;
    }
    return res;
}
int main()

{
    int t;
    cin>>t;
    while(t--)
    {
int a,b,c;
cin>>a>>b>>c;
long long ans = binPow(b,c);
ans = ans%mod;
long long sol = binPow(a,ans);
sol = sol%mod;
cout<<sol<<endl;
    }
return 0;

}