#include <iostream>
using namespace std;

int main() {
    int n, b, d;
    cin >> n >> b >> d;
    int count = 0;
    long long waste = 0;
    for (int i = 0; i < n; ++i) {
        int orange;
        cin >> orange;
        if (orange > b) continue;
        waste += orange;
        if (waste > d) {
            count++;
            waste = 0;
        }
    }
    cout << count << endl;
    return 0;
}
