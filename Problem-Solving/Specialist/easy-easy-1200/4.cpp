#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int maxi = max({a,b,c});
        int mini = min({a,b,c});
        if(maxi==a && mini == c|| maxi==c && mini ==a)
        {
            cout<<b<<endl;
        }
        else if(maxi ==b && mini == c|| maxi == c && mini == b)
        {
            cout<<a<<endl;
        }
        else if(maxi==a && mini == b || mini == a && maxi == b)
        {
            cout<<c<<endl;
        }
    }
}