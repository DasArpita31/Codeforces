#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,w;
        cin>>n>>w;
        long long a=n/w;
        cout<<a*(w-1)+(n-a*w)<<endl;
    }
}