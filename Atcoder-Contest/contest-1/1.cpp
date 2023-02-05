#include <bits/stdc++.h>
using namespace std;
int main()
{

string str;
cin>>str;
int ans =0;
for(int i=0;i<str.length();i++)
{
ans &=str[i]-'0';
}
cout<<ans<<endl;
    return 0;
}