#include <bits/stdc++.h>
using namespace std;
void solve()
{

int n;
cin>>n;
vector<int>a(n);
for(int i=0;i<n;i++) cin>>a[i];


float sum=0.0;
for(int i=0;i<n;i++)
{
    sum+=a[i];
}
sum = sum/n;
for(int i=0;i<n;i++)
{
    if(sum==a[i])
    {
        cout<<"YES"<<endl;
        return ;
    }

}
cout<<"NO"<<endl;

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