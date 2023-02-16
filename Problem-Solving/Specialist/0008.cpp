#include <bits/stdc++.h>
using namespace std;
int main()
{


    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        for(int  i=0;i<n;i++)
        {
            cin>>a[i];
        }
        long long ans =1;
        for(int i=0;i<n;i++)
        {
            ans*=a[i];
        }
        cout<<(ans+n-1)*2022<<endl;
    }


    return 0;
}