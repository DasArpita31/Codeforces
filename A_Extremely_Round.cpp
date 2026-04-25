#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int count = 0;
        for (int d = 1; d <= 9; d++) {
            for (long long x = d; x <= n; x *= 10) {
                count++;
            }
        }
        cout << count << "\n";
    }
    return 0;
}
