#include <bits/stdc++.h>
using namespace std;
void solve()
{

int a,b,c,d;
cin>>a>>b>>c>>d;
if(a>b && a>c && a>d)
{
    cout<<0<<endl;
}
else if(a>b && a>c && d>a || a>b && a>d && c>a || a>c && a>d && b>a)
{
    cout<<1<<endl;
}
else if(a>b && a<c &&a<d || a<b && a>c && a<d || a<b && a<c && a>d) 
{
cout<<2<<endl;
}
else
{
    cout<<3<<endl;
} 

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