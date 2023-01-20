#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i]; cin>>x;

    int l =-1,r=n;
    while(r>l+1)
    {
        int m = (l+r)/2;
        if(a[m]<x)
        {
            l = m;
        }
        else 
        {
            r = m;
        }
    }
    for(int i=0;i<n;i++)
    cout<<r<<endl;
    return 0;
}