#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int r,b,d;
        cin>>r>>b>>d;
        if (r<b) {
        swap(r,b);
        }
        if(r<=b*(d+1)){
            cout<<"YES\n";#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       long long n;
       cin>>n;
       if(n==1){
        cout<<0<<endl;
       }
       else if(n==2){
        cout<<1<<endl;
       }
       else if(n==3){
        cout<<2<<endl;
       }
       else if(n%2==0){
        cout<<2<<endl;
       }
       else if(n%3==0){
        cout<<3<<endl;
       }
       else{
        cout<<4<<endl;
       }
    }
}
        }
        else{
            cout << "NO\n";
        }
    }
}