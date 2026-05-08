#include<iostream>
using namespace std;
int main(){
    
    int x1,x2,x3;
    cin>> x1 >>x2 >> x3;
    if(x1>x2 && x1>x3){
        if(x2>x3){
            cout<<x1-x3<<endl;
        }
        else{
            cout<<x1-x2<<endl;
        }
    }
    else if(x2>x3 && x2>x1){
        if(x1>x3){
            cout<<x2-x3<<endl;
        }
        else{
            cout<<x2-x1<<endl;
        }
    }
    else{
        if(x1>x2){
            cout<<x3-x1<<endl;
        }
        else{
            cout<<x3-x2<<endl;
        }
    }  
}