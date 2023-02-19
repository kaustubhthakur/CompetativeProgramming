#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int>a(2*n);
    for(int i=0;i<2*n;i++) cin>>a[i];

    sort(a.begin(),a.end());
    for(int i=0;i<n;i++)
    {
        if(abs(a[n+i]-a[i])<k)
        {
            cout<<"NO"<<endl;
        return ;
        }


    }
    cout<<"YES"<<endl;
     
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