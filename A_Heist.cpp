#include <iostream>
#include <vector>
using namespace std;

int main() {
    int x;
    cin >> x;
    vector<int> a(x);
    for(int i=0;i<x;i++){
        cin>>a[i];
    }
    int max=a[0];
    int min=a[0];
    for(int i=0;i<x;i++){
        if(a[i]>max){
            max=a[i];
        }
        if(a[i]<min){
            min=a[i];
        }
    }
    int res =(max-min+1)-x;
    cout<<res<<endl;
    return 0;
}
