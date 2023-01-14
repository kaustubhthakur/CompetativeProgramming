#include <bits/stdc++.h>

using namespace std;
void solve()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    map<string,int> mp;
    for(int i=0;i<n;i++)
    {
mp[str]++;
    }
    if(mp[str])
    {
cout<<"+";
    }
    else 
    {
        cout<<"-"<<endl;
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