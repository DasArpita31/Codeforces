#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans = INT_MAX;

    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if(a == 0) 
        ans = 0;
        else if(ans != 0) 
        ans = min(ans, abs(a));
    }
    cout << ans << "\n";
}
