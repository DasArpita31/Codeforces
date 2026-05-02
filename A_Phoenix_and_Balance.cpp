#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum1=0,sum2=0;
        for(int i=1;i<=n;i++) {
            if(i==n||i<n/2) 
                sum1+=(1<<i);
            else 
                sum2+=(1<<i);
        }
        cout<<abs(sum1-sum2)<<endl;
    }
}