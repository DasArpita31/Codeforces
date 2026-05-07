#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, m, x;
        cin >> n >> m >> x;

        long long row = (x - 1) % n + 1;
        long long col = (x - 1) / n + 1;

        long long ans = (row - 1) * m + col;
        cout << ans << endl;
    }
    return 0;
}
