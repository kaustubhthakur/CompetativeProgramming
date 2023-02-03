#include<bits/stdc++.h>
using namespace std;
int T,n,a[200005];
int main() {
	cin>>T;
	while(T--){
		cin>>n;int p =0,o = 3;
		for(int i = 1;i<=n;i++)cin>>a[i],p=__gcd(p,a[i]);
		if(p==1)o=0;
		for(int i = 1;i<=n;i++)if(__gcd(p,i)==1)o=min(o,n-i+1);
		cout<<o<<endl;
	}
	return 0;
}