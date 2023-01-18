#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 5;

int n, a[N];

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
#endif
    int t;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        for(int i = 0 ; i < n ; ++i)
            scanf("%d", a + i);
    
        sort(a, a + n);
    
        if(a[0] == a[n - 1]){
            printf("%lld\n", (1LL * n * (n - 1LL)));
            continue;
        }
    
        int mn = 0, mx = n - 1;
    
        while(a[0] == a[mn])
            ++mn;
    
        while(a[n - 1] == a[mx])
            --mx;
    
        long long l = mn;
        long long r = n - mx - 1;
    
    
        printf("%lld\n", 2LL * l * r);
    }
}