#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,count=0;
        cin>>a>>b>>c;
        while(b>=1 && c>=2){
            b=b-1;
            c=c-2;
            count++;
        }
        while(a>=1 && b>=2){
            a=a-1;
            b=b-2;
            count++;
        }
        cout<<count*3<<endl;
    }
}