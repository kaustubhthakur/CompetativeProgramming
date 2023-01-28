#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n;
    cin>>n;
    string str;

   cin>>str;

int maxi = INT_MIN;
    for(int i=0;i<n;i++)
    {
        int ch = str[i]-'a'+1;
        maxi = max(maxi,ch);
    }
    cout<<maxi<<endl;
    
    
}
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}