#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(k>=n){
            cout<<n<<endl;
        }
        else{
             long long blocks = (n + k - 1) / k;  // ceil(n/k)
            long long time = (blocks - 1) * k + 1;
            cout << time << endl;
        }
    }
}