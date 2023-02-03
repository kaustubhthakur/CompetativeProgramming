#include <bits/stdc++.h>
using namespace std;
void solve()
{
    char ch;
    cin>>ch;
    if(ch=='c' || ch=='o' || ch=='d' || ch=='e' || ch=='f' || ch=='r' ||ch=='s')
    {
        cout<<"YES"<<endl;

    }
    else 
    {
        cout<<"NO"<<endl;
    }
}
int main()
{

    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        solve();
    }
    return 0;
}