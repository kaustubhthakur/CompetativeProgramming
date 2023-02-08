#include <iostream>
using namespace std;
int main(){
	int t,n,a,b;
	for(cin >> t; t; t--){
		long long s = 0, mx = 0;
		for(cin >> n; n; n--){
			cin >> a>>b;
			s += min(a,b);
			mx = max((long long) max(a,b), mx);
		}
		cout<<2*s+2*mx<<endl;
	}
    return 0;
}