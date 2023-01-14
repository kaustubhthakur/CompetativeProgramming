#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string str;
    cin>>str;
    int a=0,b=0,c=0,ans;
for(int i=0;i<str.length();i++)
{
    ans = str[i] -0;
ans++;

}
for(int i=0;i<str.length();i++)
{
    if(ans[i]>a && (b>a && b>c && b>ans[i]) && c>ans[i])
    {
        cout<<a-'0'<<" "<<b+'0'<<" "<<c+'0';
   
   return ;
   
    }
    else 
    {
        cout<<":)"<<endl;
        return;
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