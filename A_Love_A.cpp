#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;

    int count=0;
    int n=s.size();
    for(char c:s){
        if(c=='a'){
            count++;
        }
    }
    int Len= min(n,2*count-1);
    cout<<Len<<" ";
    return 0;
}