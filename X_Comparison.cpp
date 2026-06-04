#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.size();
    if (n == 1) {
        cout << s;
        return 0;
    }
    string ans = "~";
    for (int i = 1; i < n; i++) {
        string x = s.substr(0, i);
        string y = s.substr(i);
        sort(x.begin(), x.end());
        sort(y.begin(), y.end());
        string temp = x + y;
        if (temp < ans)
            ans = temp;
    }
    cout << ans;
    return 0;
}
