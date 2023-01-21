#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, s;
        cin >> n >> s;
        int m = n / 2 + 1;
        cout << s / m << '\n';
    }
    return 0;
}