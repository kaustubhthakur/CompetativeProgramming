#include <bits/stdc++.h>
using namespace std;
int n,k;
vector<int> a;
bool good(double x)
{
    int s;
for(int i=0;i<n;i++)
{
 s+=   floor(a[i]/x);
}
return s>=k;
}
void solve()
{
    a.resize(n);
cin>>n>>k;
for(int i=0;i<n;i++) cin>>a[i];
double l = 0;
double r = 1e8+5;
for(int i=0;i<100;++i)
{
    double m = (l+r)/2;
    if(good(m))
    {
        l = m;
    }
    else 
    {
        r = m;
    }
}

}
int main()
{
 solve();

    return 0;
}