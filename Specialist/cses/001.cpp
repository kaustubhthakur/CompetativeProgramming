#include <bits/stdc++.h>
using namespace std;
void solve()
{
int n;
cin>>n;
vector<unsigned> a(n);
for(int i=0;i<n;i++) cin>>a[i];

int max_sub = 0;
int maxi =0;
for(int i=0;i<n;i++)
{
    max_sub +=a[i];
    max_sub++;
maxi = max(maxi,max_sub);
}
cout<<maxi<<endl;

}
int main()
{
solve();


    return 0;
}