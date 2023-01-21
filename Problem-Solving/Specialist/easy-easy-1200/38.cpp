#include <bits/stdc++.h>
using namespace std;
void solve()
{
    vector<int> a(3);
    for(int i=0;i<3;i++) cin>>a[i];
    int ans = abs(a[0]+a[2]-2*a[1]);
    if((ans)%3==0)
    {
        cout<<0<<endl;
    }
    else 
    {
        cout<<1<<endl;
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