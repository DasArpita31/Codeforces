#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
          int a,b;
          int max=-1;
          int win=-1;
        for(int i=1;i<=n;i++){
            int a,b;
            cin>>a>>b;
            if(a<=10 && b>max){
                max=b;
                win=i;
            }
        }
    cout<<win<<endl;
    }
}