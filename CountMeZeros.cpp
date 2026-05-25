#include<iostream>
using namespace std;
int main(){
    int n,count=0,rem=0;
    cin>>n;
    while(n>0){
        rem= n%10;
        n=n/10;
        if(rem==0){
            count++;
        }
    }
    cout<<count<<endl;
}