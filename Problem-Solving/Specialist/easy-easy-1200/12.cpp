#include <bits/stdc++.h>
using namespace std;
void solve()
{
int n;
cin>>n;
vector<int> a(n);
for(int i=0;i<n;i++) cin>>a[i];


int mini = a[0],maxi = a[0];
for(int i=1;i<n;i++)
{
    maxi |=a[i];
    mini &=a[i];
}
cout<<maxi-mini<<endl;
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