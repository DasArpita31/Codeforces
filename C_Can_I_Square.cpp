#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        long long total = 0;
        for (int i = 0; i < n; ++i) {
            int a;
            cin >> a;
            total += a;
        }
        long long root = sqrt(total);
        if (root * root == total)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
