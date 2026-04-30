#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    int maxLen = 1, currLen = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] > a[i - 1]) {
            currLen++;
        } else {
            currLen = 1;
        }
        maxLen = max(maxLen, currLen);
    }
    cout << maxLen << endl;
    return 0;
}
