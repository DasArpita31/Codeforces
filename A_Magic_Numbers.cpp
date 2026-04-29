#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
     for(int i=0;i<s.size();){
        if(s.substr(i,3) == "144"){
            i+=3;
        }
        else if(s.substr(i,2) == "14"){
            i+=2;
        }
        else if(s[i] == '1'){
            i+=1;
        }
        else {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}