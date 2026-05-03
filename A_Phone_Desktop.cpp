#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;

        if (x == 0 && y == 0) {
            cout << 0 << "\n";
            continue;
        }
        int screens = (y + 1) / 2;  
        int freeSmall = (y / 2) * 7 + (y % 2) * 11;
        if (x > freeSmall) {
            int remain = x - freeSmall;
            screens += (remain + 14) / 15;
        }

        cout << screens << "\n";
    }
    return 0;
}
