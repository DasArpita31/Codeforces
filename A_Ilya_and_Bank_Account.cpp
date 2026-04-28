#include<iostream>
using namespace std;

int main(){
    long long n;
    cin>>n;
    if(n>=0) cout<<n<<endl;
    else {
        long long l1=n/10;
        long long l2=(n/100)*10+(n%10);
        cout<< max(l1,l2)<<endl;
    }
}