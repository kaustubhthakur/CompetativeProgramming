#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
int fact(int n)
{
    if(n==0 || n==1) return 1;

    return n*fact(n-1)%mod;;
}
int main()
{


int a,b;
cin>>a>>b;
int ans = min(a,b);
cout<<fact(ans)<<endl;


    return 0;
}