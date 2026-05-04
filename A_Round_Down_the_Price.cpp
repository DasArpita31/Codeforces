#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long m;
        cin >> m;
        long long p = 1;
        while (p * 10 <= m) {
            p *= 10;
        }
        cout << m - p << "\n";
    }
    return 0;
}
