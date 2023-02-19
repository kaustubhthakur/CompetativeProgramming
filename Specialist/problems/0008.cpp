#include <bits/stdc++.h>

using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)

int main() {
    int t;
    cin >> t;
    forn(tt, t) {
        string s;
        cin >> s;
        int n = s.length();
        vector<bool> a(n + 1);
        a[0] = true;
        forn(i, n)
            a[i + 1] = a[i] && (s[i] == '1' || s[i] == '?');
        vector<bool> b(n + 1);
        b[0] = true;
        for (int i = n - 1; i >= 0; i--)
            b[n - i] = b[n - i - 1] && (s[i] == '0' || s[i] == '?');
        int result = 0;
        forn(i, n)
            if (a[i] && b[n - i - 1])
                result++;
        cout << result << endl;
    }
}