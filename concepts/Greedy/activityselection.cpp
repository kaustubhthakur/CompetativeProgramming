#include <bits/stdc++.h>
using namespace std;


void solve(vector<int>s,vector<int> e,int n)

{
int i=0,j;
cout<<i<<endl;
for(j=1;j<n;j++)
{
    if(s[j]>=e[i])
    {
        cout<<j<<" ";
        i=j;
    }
}
}
int main()
{

int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    vector<int> b(n);
    for(int i=0;i<n;i++) cin>>b[i];
    solve(a,b,n);

}


    return 0;
}