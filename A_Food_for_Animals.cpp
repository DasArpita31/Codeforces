#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;

        long long needDogs = max(0LL, x - a);
        long long needCats = max(0LL, y - b);

        if (needDogs + needCats <= c)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
