#include <bits/stdc++.h>
using namespace std;
int solve(int n)
{
int dp[n+6];
for(int i=0;i<n;i++)
{
    dp[i] = dp[i-1] +dp[i-2]+dp[i-3]+dp[i-4]+dp[i-5]+dp[i-6];
}
return dp[n];
}
int main()
{
int n;
cin>>n;
cout<<solve(n);
}