#include <bits/stdc++.h>
using namespace std;
const int n1 =1e9+7;

void solve()
{

    long long n;
  
    cin>>n;
    long long ans=((((n*(n+1))%n1)*(4*n-1))%n1*337)%n1;
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