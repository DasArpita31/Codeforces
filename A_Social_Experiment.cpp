#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        if(a==2) cout<<2<<endl;
        else if(a==3) cout<<3<<endl;
        else if(a%2==0) cout<<0<<endl;
        else cout<<1<<endl;
    }
}