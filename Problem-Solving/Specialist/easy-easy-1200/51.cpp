#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    if(n/4==n/n)
    {
        cout<<n<<" "<<n/n<<endl;
    }
    else 
    {
        cout<<n<<" "<<n/2<<" "<<n/n<<endl;
    }
}
int main()
{

    solve();

    return 0;
}