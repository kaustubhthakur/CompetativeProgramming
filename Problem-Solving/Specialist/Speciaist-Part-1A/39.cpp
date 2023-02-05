#include <bits/stdc++.h>
using namespace std;
void solve()
{
int n,k;
cin>>n>>k;
vector<int>a(n);
for(int i=0;i<n;i++) cin>>a[i];



if(n==k)
{
    cout<<0<<endl;
}
else 
{
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        
           if(a[i]>a[i+1])
        {
           cnt++;
        }  
        
       
    }
    cout<<cnt<<endl;
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