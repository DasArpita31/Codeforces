#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    string s;
    cin>>s;
    vector<char> num;
    for(char i:s){
        if(i!='+'){
            num.push_back(i);
        }
    }
    sort(num.begin(),num.end());
    for(int i=0;i<num.size();i++){
        cout<<num[i];
        if(i<(num.size()-1)){
            cout<<'+';
        }
    }
}