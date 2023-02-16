#include<bits/stdc++.h>
using namespace std;
int t,n,a,ans;
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		cout<<n<<endl;
		ans=0;
		for(int i=1;i<=n;i++){
			cin>>a;
			int p=1;
			while(p<a)p*=2;
			cout<<i<<' '<<p-a<<endl;
		}
	}
}