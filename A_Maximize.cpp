#include <bits/stdc++.h>
using namespace std;

int g(int a, int b) { // gcd ফাংশন
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int x; cin >> x;
        int ans = 1, best = 0;
        for (int y = 1; y < x; ++y) {
            int gg = g(x, y);
            if (gg + y > best) {
                best = gg + y;
                ans = y;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
