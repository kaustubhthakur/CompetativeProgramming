#include <bits/stdc++.h>
using namespace std;
//he is int he 1st floor
//
void solve()
{
int a,b,c;
cin>>a>>b>>c;

int dx=a-1;
int dy=abs(b-c)+c-1;
int sol=0;
if(dx<=dy)
{
    sol+=1;
}
if(dx>=dy)
{
    sol+=2;
}
cout<<sol<<endl;



}
int main()
{
int t;
cin>>t;
while(t--)
{
    solve();
}



}