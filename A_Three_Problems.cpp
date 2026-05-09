#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> r(n);
    for (int i = 0; i < n; ++i) {
        cin >> r[i];
    }

    // Try every element as the middle one
    for (int j = 1; j < n - 1; ++j) {
        int left = -1, right = -1;

        // Find smaller on the left
        for (int i = 0; i < j; ++i) {
            if (r[i] < r[j]) {
                left = i;
                break;
            }
        }

        // Find larger on the right
        for (int k = j + 1; k < n; ++k) {
            if (r[k] > r[j]) {
                right = k;
                break;
            }
        }

        if (left != -1 && right != -1) {
            // Output 1-based indices
            cout << left + 1 << " " << j + 1 << " " << right + 1 << endl;
            return 0;
        }
    }

    // If no such triplet is found
    cout << "-1 -1 -1" << endl;
    return 0;
}
