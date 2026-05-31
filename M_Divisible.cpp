#include <iostream>
#include <string>
using namespace std;

int main() {
    string N;
    long long X;
    cin >> N >> X;
    long long r = 0;
    for (char d : N) {
        r = (r * 10 + (d - '0')) % X;
    }
    if (r == 0)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
