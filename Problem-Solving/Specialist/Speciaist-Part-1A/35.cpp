#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;
typedef long double ld;

#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);

vector<ll> vec;
ll n;

int main() {
	fastInp;

	ll t;
	cin >> t;

	while (t--) {
		cin >> n;

		vec.resize(n);
		for (auto& c : vec) cin >> c;

		sort(vec.begin(), vec.end());

		cout << vec[n - 1] + vec[n - 2] - vec[0] - vec[1] << "\n";
	}

	return 0;
}