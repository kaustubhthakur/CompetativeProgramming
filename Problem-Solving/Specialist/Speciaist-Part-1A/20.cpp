#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector< int> a(n);
    int cnt=0,sum=0;
    for(int i =0;i<n;i++)
    {
     cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            cnt++;
        }
        sum+=abs(a[i]);
    }
    if(cnt%2==1)
    {
        cout<<cnt<<endl;
    }
    else 
    {
        if(cnt==0)
        {
            cout<<-n<<endl;
        }
        else 
        {
            cout<<sum<<endl;
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