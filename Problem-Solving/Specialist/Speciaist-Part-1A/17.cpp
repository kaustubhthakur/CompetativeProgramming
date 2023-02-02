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
        if(n==1)
        {
            cout<<"2"<<endl;
        }
        else if(n==2 || n==3)
        {
            cout<<"1"<<endl;
        }
        else 
        {
            cout<<(n+2)/3<<endl;
        }
    }
}