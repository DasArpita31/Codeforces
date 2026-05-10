#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin >>a>>b>>c;
        int d = abs(a-b);
        int ans=(d+2*c-1)/(2*c);
        cout<<ans<<endl;
    }
    return 0;
}
