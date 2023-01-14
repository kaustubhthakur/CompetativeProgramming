#include<bits/stdc++.h>
using namespace std;
int t,n,a[200005];
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++)cin>>a[i];
		sort(a+2,a+n+1);
		for(int i=2;i<=n;i++){
			if(a[1]<a[i])a[1]=(a[1]+a[i]+1)/2;
		}
		cout<<a[1]<<endl;
	}
    return 0;
}