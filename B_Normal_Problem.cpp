#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        string a;
        cin>>a;
        
        reverse(a.begin(),a.end());
        for(char &c : a){
            if (c=='p') 
                c='q';
            else if(c=='q') 
                c='p';
        }
        cout<<a<<endl;
    }
}