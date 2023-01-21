#include <bits/stdc++.h>
using namespace std;
void solve()
{

}
int main()
{

int t;
cin>>t;
while(t--)
{
   
    long long n;
    cin>>n;
if(n%2==1 || n<4)
{
    cout<<"-1"<<endl;
}
else 
{
    cout<<(n+4)/6<<" "<<n/4<<endl;
}
}
    return 0;
}