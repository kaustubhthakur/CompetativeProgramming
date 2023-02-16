#include <bits/stdc++.h>
using namespace std ;
void solve()
{

   int n;
    cin>>n;
     string s;
     cin>>s;

     set<char>st;
     vector<int>fa(n);
     for ( int i = 0; i <  n; i++)
     {
         st.insert(s[i]);
         fa[i]=st.size();
     }

     vector<int>fb(n);
     st.clear();
     for ( int i =n-1; i >=0; i--)
     {
        st.insert(s[i]);
        fb[i]=st.size();
     }

     int ans=0;
     for ( int i = 0; i <  n-1; i++)
     {
         ans=max(ans,fa[i]+fb[i+1]);
     }

     cout<<ans<<endl;
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