#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int w,d,h;
    cin>>w>>d>>h;
    int a,b,f,g;
    cin>>a>>b>>f>>g;
    int ans = INT_MAX;
    int  dw = abs(b-g)+abs(w-f)+abs(w-a);
    int  dx = abs(b-g)+abs(0-f)+abs(0-a);
    int  dy = abs (a-f)+abs(0-b)+abs(0-g);
    int dz= abs(a-f)+abs(d-b)+abs(d-g);
ans = min({ans,dw,dx,dy,dz});
    ans = ans +h;
    cout<<ans<<endl;
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