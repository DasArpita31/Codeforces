#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        bool f=false;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x==67){
                f=true;
            }
        }
        if(f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}