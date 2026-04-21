#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        string s;
        cin >> n >> s;
        set<char> st(s.begin(), s.end());
        if(n == 1) {
            cout << "YES\n";
        }
        else if(st.size() == 1) {
            cout << "YES\n";
        }
        else if(n >= 4) {
            cout << "NO\n";
        }
        else {
            cout << "YES\n";
        }
    }
    return 0;
}
