#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n==2){
            cout <<"-1"<<endl;
            continue;
        }
        vector<int> p(n);
        for(int i=0;i<n;i++){
            p[i]=i+1;
        }
        swap(p[n-1],p[n-3]);
        for(int i=0;i<n;i++){
            cout<<p[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
