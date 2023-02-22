#include <bits/stdc++.h>
using namespace std;
void solve()
{
int n;
cin>>n;
vector<int>a(n);
for(int i=0;i<n;++i)
{
    cin>>a[i];
}
sort(a.begin(),a.end());
bool ans = binary_search(a.begin(),a.end(),500);
if(ans == true)
{
    cout<<"NO"<<endl;
}
else 
{
    cout<<"YES"<<endl;
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