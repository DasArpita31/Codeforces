#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        long long count=0;
        cin>>n>>k;
        while(n>0){
            if(k>n){
                count+=n;
                break;
            }
            if(n%k!=0){
                long long rem=n%k;
                n-=rem;
                count+=rem;
            }
            else{
                n/=k;
                count++;
            }
        }
        cout<<count<<endl;
    }
}
