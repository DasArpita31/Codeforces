#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;

    vector<int> h(n);
    for (int i = 0; i < n; ++i)
        cin >> h[i];

    sort(h.begin(), h.end());

    int count = 0;
    // We go through the array and try to split after i-th smallest element
    for (int i = 1; i < n; ++i) {
        int vasya = i;
        int petya = n - i;

        // Check if split gives correct number of chores
        if (vasya == b && petya == a) {
            // Check if the elements at split point are different
            if (h[i - 1] < h[i]) {
                count++;
            }
        }
    }

    cout << count << endl;
    return 0;
}
