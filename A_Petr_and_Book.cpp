#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(7);
    for (int k = 0; k < 7; ++k) 
    cin >> a[k];

    int day = 0;
    while (true) {
        n -= a[day];
        if (n <= 0) {
            cout << (day + 1) << "\n";
            break;
        }
        day = (day + 1) % 7;
    }
    return 0;
}
