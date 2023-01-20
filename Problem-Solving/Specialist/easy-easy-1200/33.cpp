#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<int> b(n);
    for (int i = 0; i < n; i++)
        cin >> b[i];


        long long suma=0,sumb=0;
        int maxi=INT_MIN;

        for(int i=0;i<n;i++)
        {
            suma+=a[i];
        }
        for(int i=0;i<n;i++)
        {
            sumb+=b[i];

        }
        for(int i=0;i<n;i++)
        {
            maxi = max(maxi,b[i]);
        }
        cout<<suma+sumb-maxi<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}