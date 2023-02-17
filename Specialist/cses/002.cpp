#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int x ,y;
for(int i=0;i<n;i++)
{
    cin>>x>>y;
}
int cnt =1;
int j;

for(j=1;j<n;j++)
{
    if(x>=y)
    {
       cnt++;
    }
}
cout<<cnt+1<<endl;

return 0;

}