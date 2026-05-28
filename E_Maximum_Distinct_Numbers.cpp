#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N;
    cin >> N;
    long long sum = 0, count = 0;
    long long i = 1;
    while (sum + i <= N) {
        sum += i;
        count++;
        i++;
    }
    cout << count << endl;
    return 0;
}