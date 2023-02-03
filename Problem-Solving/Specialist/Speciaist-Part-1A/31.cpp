#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    string str;
    for(int i=0;i<n;i++)
    {
        cin>>str[i];
    }
    int horizontal=0,vertical=0;
    for(int i=0;i<n;i++)
    {
        if(str[i]=='L')
        {
            horizontal--;
        }
        if(str[i]=='R')
        {
            horizontal++;
        }
        if(str[i]=='U')
        {
            vertical++;
        }
        if(str[i]=='D')
        {
            vertical--;
        }
        if(horizontal==1 && vertical==1)
        {
            cout<<"YES"<<endl;
            return ;
        }
    }
  
            cout<<"NO"<<endl;
        
}

int main()
{


    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        solve();

    }
    return 0;
}