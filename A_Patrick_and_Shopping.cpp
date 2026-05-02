#include <bits/stdc++.h>
using namespace std;

int main() {
    long long d1, d2, d3;
    cin >> d1 >> d2 >> d3;

    long long ans = LLONG_MAX;

    ans = min(ans, d1 + d2 + d3);    
    ans = min(ans, 2 * (d1 + d2));
    ans = min(ans, 2 * (d1 + d3));
    ans = min(ans, 2 * (d2 + d3));

    cout << ans << "\n";
    return 0;
}
