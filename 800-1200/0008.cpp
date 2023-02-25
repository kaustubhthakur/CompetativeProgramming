#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    set<int>st;
    for(int i=0;i<n;i++)
    {
        st.insert(a[i]);
    }
    if(k==1)
    {
        cout<<st.size()<<endl;
    }
    else 
    {
        
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