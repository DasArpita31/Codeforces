#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
        }
        int m = 10 - n;
        int ans = 0;
        if (m >= 2) {
            ans = 3 * m * (m - 1);
        }
        cout << ans << "\n";
    }
    return 0;
}
