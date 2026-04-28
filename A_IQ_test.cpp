#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n+1];
    int count=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(a[i]%2==0){
            count++;
        }
    }
    for(int i=1;i<=n;i++){
        if(count>1){
            if(a[i]%2!=0){
                cout<<i<<endl;
                break;
            }
        }
        else{
            if(a[i]%2==0){
                cout<<i<<endl;
                break;
            }
        }
    }
}