#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    for (char &c : s) {
        c = tolower(c);
    }
    set<char> letters(s.begin(), s.end());
    if (letters.size() == 26)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
