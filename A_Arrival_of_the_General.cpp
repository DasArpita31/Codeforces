#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++) {
        cin>>a[i];
    }
    int max=-1,min=101;
    int maxIndex=0,minIndex=0;
    for (int i=0;i<n;i++){
        if (a[i]>max) {
            max=a[i];
            maxIndex=i;
        }
    }
    for (int i=0;i<n;i++){
        if(a[i]<=min){
            min=a[i];
            minIndex=i;
        }
    }
    int moves= maxIndex+(n-1-minIndex);
    if (maxIndex>minIndex)
        moves--;
    cout<<moves<<endl;
    return 0;
}