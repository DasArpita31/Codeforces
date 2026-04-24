#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%7==0){ 
            cout<<n<<endl;
            continue;
        }
        for(int d=0;d<=9;d++){
            int a=(n/10)*10+d;
            if(a % 7==0){
            cout<<a<<endl;
            break;
            }
        }
    }
}