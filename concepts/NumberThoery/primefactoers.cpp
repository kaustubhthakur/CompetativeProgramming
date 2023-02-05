#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    vector<int>primes;
    if(n==1 || n==0)
    {
        cout<<0<<endl;
    }
    for(int i=2;i*i<=n;i++)
    {
        while(n%i==0)
        {
            primes.push_back(i);
            n=n/i;
        }
    }
    if(n>1)
    {
        primes.push_back(n);
    }
    for(auto prime:primes)
    {
        cout<<prime<<endl;
 
    }
    return 0;
}