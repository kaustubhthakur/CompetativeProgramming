#include <bits/stdc++.h>
using namespace std;
int main()
{

int n,m;
cin>>n>>m;
vector<int> a(n);
for(int i=0;i<n;i++) cin>>a[i];
vector<int> b(m);
for(int i=0;i<m;i++)
cin>>b[i];

vector<int> c(n+m);
int i=0,j=0,k=0;
while(i<n || j<m)
{
    if(a[i]<b[j])
    {
        c[k++] = a[i++]; 
    }
    else 
    {
        c[k++] = b[j++];
    }
}
for(auto it : c)
{
    cout<<it<<" ";
}
cout<<endl;
    return 0;
}