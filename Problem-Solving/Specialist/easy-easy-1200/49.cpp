#include <bits/stdc++.h>
using namespace std;
long long binPow(long long a)
{
    if(a==0) return 1;

    int res = binPow(a/2);
    if(a%2)
    {
        return res*res*5;

    }
    else{
        return res*res;
    }
}
void solve()
{
int a;
cin>>a;

cout<<pow(5,2)<<endl;


}
int main()
{
    solve();
    return 0;
}