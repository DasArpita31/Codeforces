#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    vector<int> a(5,1);
    for(int i:a){
        cout<<i<<endl;
    }
   /* v.push_back(1);
    v.push_back(0);
    v.push_back(3);
    v.push_back(5);
    v.push_back(4);
    v.pop_back();
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    cout<<v.at(3)<<endl;
    cout<<v.front()<<endl;
    cout<<v.back()<<endl;
    v.clear();
    cout<<v.size()<<endl;*/
}