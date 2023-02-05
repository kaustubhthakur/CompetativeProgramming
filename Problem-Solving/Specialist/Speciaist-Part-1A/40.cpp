
#include<iostream>
using namespace std;
int T,n;
int main()
{
	cin>>T;
	while(T--)
	{
		cin>>n;
		if(n&1)cout<<1<<' ';
		for(int i=(n&1)+1;i<=n;i+=2)cout<<i+1<<' '<<i<<' ';
		cout<<endl;
	}
}