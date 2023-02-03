#include <bits/stdc++.h>
using namespace std;
int n,k;
vector<int> a(n);

bool good(double x)
{
    int sum =0;
    for(int i=0;i<n;i++)
    {
        sum+=floor(a[i]/x);
    }
    return sum>=k;
}

int main()
{

cin>>n>>k;
a.resize(n);
for(int i=0;i<n;i++) cin>>a[i];


double l =0,r = 1e8;
for(int i=0;i<100;i++)
{
    double m = (l+r)/2;
    if(good(m)==1)
    {
        l =  m;
    }
    else
{
    r = m;
}
    }
cout<<setprecision(20)<<l<<" "<<r<<endl;



}