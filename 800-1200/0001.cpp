#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> odd, even;
        for (int i = 1; i <= n; i++) {
            int x;
            cin >> x;
            if (x % 2 == 0) {
                even.push_back(i);
            } else {
                odd.push_back(i);
            }
        }
        if (odd.size() >= 3) {
            cout << "YES\n";
            cout << odd[0] << " " << odd[1] << " " << odd[2] << '\n';
        } else if (odd.size() >= 1 && even.size() >= 2) {
            cout << "YES\n";
            cout << odd[0] << " " << even[0] << " " << even[1] << '\n';
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}