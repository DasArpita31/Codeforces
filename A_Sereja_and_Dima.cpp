#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) 
    cin>>a[i];

    int l=0,r=n-1;
    int s=0,d=0;
    int turn=0;

    while(l<=r){
        if(a[l]>a[r]){
            if(turn==0) s+=a[l];
            else d+=a[l];
            l++;
        } else {
            if(turn==0) s+=a[r];
            else d+=a[r];
            r--;
        }
        turn=1-turn;
    }
    cout<<s<<" "<<d;
}