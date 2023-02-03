#include <bits/stdc++.h>
using namespace std;
void solve()
{

    int n;
    cin>>n;

vector<int> a(n);
for(int i=0;i<n;++i)
{
    cin>>a[i];
}
int sum2=0;
for(int i=0;i<n;++i)
{
    if(a[i]<0)
    {
        sum2+=abs(a[i]);
    }
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