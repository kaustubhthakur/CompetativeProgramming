#include <bits/stdc++.h>
using namespace std;
int gcd (int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd (b, a % b);
}
void solve()
{
  	long long A,B,a,b,res,i,ans;
	cin>>A>>B;
	if(!A){
		cout<<0<<endl;
		return;
	}
	res=A+3;
	for(i=(B<2?2-B:0); i<res; ++i){
		b=B+i;
		a=A;
		ans=i;
		while(a){
			a/=b;
			++ans;
		}
		if(ans<res)res=ans;
	}
	cout<<res<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }


    return 0;
}