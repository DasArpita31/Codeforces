#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int prog[5000], math[5000], pe[5000];
    int c1 = 0, c2 = 0, c3 = 0;

    for (int i = 1; i <= n; i++) {
        int t;
        cin >> t;
        if (t == 1) prog[c1++] = i;
        else if (t == 2) math[c2++] = i;
        else pe[c3++] = i; 
    }
    int teams = c1;
    if (c2 < teams) teams = c2;
    if (c3 < teams) teams = c3;
    cout << teams << "\n";
    for (int i = 0; i < teams; i++) {
        cout << prog[i] << " " << math[i] << " " << pe[i] << "\n";
    }
    return 0;
}
