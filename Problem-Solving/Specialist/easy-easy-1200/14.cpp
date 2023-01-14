#include <bits/stdc++.h>
using namespace std;
void solve()
{
   int n, a, b;
    cin >> n >> a >> b;
    int x = (n + a - 1) / a;
    if(a > b) x = 1;
    cout << x << endl;

}
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;  
}