#include<bits/stdc++.h>
using namespace std;int main(){int tc;cin>>tc;while(tc--){int n;cin>>n;int a[n], b[n];for(auto &x:a)cin>>x;for(auto &x:b)cin>>x;long long sum = 0;
for(int i=0;i<n-1;i++)
{
    sum += min(abs(a[i] - a[i+1]) + abs(b[i] - b[i+1]), abs(a[i] - b[i+1]) + abs(b[i] - a[i+1]));
    }
    cout<<sum<<endl;
    }
    
    return 0;
    }