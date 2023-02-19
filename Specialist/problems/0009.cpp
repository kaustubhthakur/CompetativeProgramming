#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string str;
        cin>>str;
        if(str=="YES" || str=="yes" || str=="YEs" || str=="YeS" || str=="yES" ||str=="Yes" || str=="yeS" ||str=="yEs")
        {
            cout<<"YES"<<endl;
        }
        else 
        {
            cout<<"NO"<<endl;
        }
    }
}