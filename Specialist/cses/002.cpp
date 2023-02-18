#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
void solve()
{
    int n;
    cin>>n;
    string str;
    int ans ;
    int cnt=0;

for(int i=0;i<n;i++)
{
    cin>>str[i];
}
for(int i=0;i<n;i++)
{
    for(int j=n-1;j>0;j--)
    {
        ans = ~str[i];
        ans = ~str[j];
        cnt++;
    }
}
cout<<cnt<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
solve();
    }
}