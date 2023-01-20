#include <iostream>
using namespace std;
int main() {
	int t, n, i;
	cin >> t;
	while (t--) {
		cin >> n;
		cout << (n % 2 == 0 ? "1 3 " : "2 ");
		for (i = 1; i < n - !(n % 2); i++)
			cout << "2 ";
		cout << endl;
	}
    return 0;
}