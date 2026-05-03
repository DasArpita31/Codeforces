#include <bits/stdc++.h>
using namespace std;

int main() {
    long long x;
    cin>>x;
    int c=0;
    while(x>0){
        c+=(x&1);
        x>>=1;
    }
    cout <<c<<endl;
}