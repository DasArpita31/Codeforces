#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long x,y,a,b;
        cin>>x>>y>>a>>b;
        long long dis=y-x;
        long long s=a+b;
        if(dis%s==0){
            cout<<dis/s<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    }
}

