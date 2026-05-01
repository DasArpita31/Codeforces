#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string s;
    cin >> s;
    char current = 'a';
    int total_moves = 0;
    for (char c : s) {
        int diff = abs(c - current);
        int move = min(diff, 26 - diff);
        total_moves += move;
        current = c;
    }
    cout << total_moves << endl;
    return 0;
}
