#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    int odd=0,even=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            even++;

        }
        if(a[i]%2==1) 
        {
            odd++;
        }
    }




cout<<min(odd,even)<<endl;
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