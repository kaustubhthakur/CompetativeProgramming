#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    string str;
    set<char> st;
    for(int i=0;i<n;i++) cin>>str[i];

for(int i=0;i<n;i++)
{
    st.insert(str[i]);
}
if(st.size()==n)
{
    for(auto &it : str)
    {
        cout<<it;
    }
    
    
}
else if(str.size()==n-1)
{
    for(int i=0;i<n;i++)
    if(str[i]-'0' == str[i+1]-'0')
    {
swap(str[i+1],str[i+1]+2)
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