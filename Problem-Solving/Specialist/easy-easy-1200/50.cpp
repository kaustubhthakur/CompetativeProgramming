#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
void solve()
{
    int n;
    cin>>n;
    n = n%mod;
    int cnt=0;
    for(int i=1;i<=n;++i)
    {
        if(i%2==0 && i%3==0 && i%4==0 && i%5==0 && i%6==0 && i%7==0 && i%8==0 && i%9==0 && i%10==0)
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
}
int main()
{


    solve();

    return 0;
}