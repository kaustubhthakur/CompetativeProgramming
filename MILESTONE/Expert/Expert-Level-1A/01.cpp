#include <bits/stdc++.h>

using namespace std;
void solve()
{
int n;
cin>>n;
int a[n+1];
for(int i=1;i<=n;i++) cin>>a[i];


sort(a+1,a+n+1);
int mini = INT_MAX;
for(int i=3;i<=n;i++)
{
    mini = min(mini,a[i]-a[i-2]);
}
cout<<mini<<endl;

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