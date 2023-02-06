#include <bits/stdc++.h>
using namespace std;
vector<int> factor(int n) {
	vector<int> ret;
	for (int i = 2; i * i <= n; i++) {
		while (n % i == 0) {
			ret.push_back(i);
			n /= i;
		}
	}
	if (n > 1) ret.push_back(n);
	return ret;
}
long long fact(long long n)
{
    if(n==0) return 1;

    return n*fact(n-1);
}
void solve()
{



int n;
cin>>n;
int x;
for(int i=0;i<n;i++)
{
    cin>>x;
}
cout<<x<<endl;




    
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