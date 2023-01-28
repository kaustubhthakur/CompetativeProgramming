#include <bits/stdc++.h>

using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)

int main() {
    int t;
    cin >> t;
    forn(tt, t) {
        int n;
        cin >> n;
        vector<int> a(n);
        forn(i, n)
            cin >> a[i];
        vector<int> b(a);
        sort(b.begin(), b.end());
        forn(i, n) {
            if (a[i] == b[n - 1])
                cout << a[i] - b[n - 2] << " ";
            else
                cout << a[i] - b[n - 1] << " ";
        }
        cout << endl;
   }
}