#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    string original, target;
    cin >> original >> target;
    int total_moves = 0;
    for (int i = 0; i < n; ++i) {
        int from = original[i] - '0';
        int to = target[i] - '0';
        int diff = abs(from - to);
        total_moves += min(diff, 10 - diff);
    }
    cout << total_moves << endl;
    return 0;
}
