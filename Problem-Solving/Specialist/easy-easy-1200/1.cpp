#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string str;
    cin>>str;
   cout<<str[0]-'0'+str[2]-'0'<<endl;
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