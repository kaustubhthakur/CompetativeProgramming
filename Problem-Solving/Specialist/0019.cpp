#include <bits/stdc++.h>
using namespace std;
void solve()
{

    int n,m;
    cin>>n>>m;
    string str1,str2;
    for(int i=0;i<n;i++)
    {
        cin>>str1[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>str2[i];
    }
    if(n>m)
    {
        if(str1[n-1]==str2[m])
        {
            cout<<"NO"<<endl;
        }
        else {
            cout<<"YES"<<endl;
        }
    }
    else 
    {
        if(str1[n]==str2[m-1])
        {
            cout<<"NO"<<endl;
        }
        else 
        {
            cout<<"YES"<<endl;
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