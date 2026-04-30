#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin>>n>>s;
    int L=0,R=0;
    for (char c : s) {
        if (c == 'L')
         L++;
        else
         R++;
    }
    cout <<L+R+1<<"\n";
}
