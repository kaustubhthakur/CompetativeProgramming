#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    long long sum = a+b+c;
    int maxi = max({a,b,c});
    if(maxi==(sum-maxi))
    {
        cout<<"YES"<<endl;
    }
    else 
    {
        cout<<"NO"<<endl;
    }
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