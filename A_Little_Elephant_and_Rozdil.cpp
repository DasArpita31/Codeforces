#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<long long> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long f = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<f){
            f=arr[i];
        }
    }
    int count=0,index=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==f){
            count++;
            index=i+1;
        }
    }
    if(count>1){
        cout<<"Still Rozdil";
    }
    else
        cout<<index;
    return 0;
}