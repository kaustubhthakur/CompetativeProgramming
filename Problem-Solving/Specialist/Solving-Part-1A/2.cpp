#include<bits/stdc++.h>
using namespace std;
int a[100010];
int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		int p=0;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			if(a[i]!=0&&a[i-1]==0)p++;
		}
		cout<<min(p,2)<<endl;
		
	}
	return 0;
}
