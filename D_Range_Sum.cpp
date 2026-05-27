#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long l,r;
        cin>>l>>r;
        long long sum=((r*(r+1)/2)-((l-1)*l)/2);
        cout<<sum<<endl;
    }
}