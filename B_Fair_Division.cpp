#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count1=0,count2=0;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            if(a==1)
            count1++;
            else
            count2++;
        }
        int total=count1+2*count2;
            if(total%2!=0){
                cout<<"NO"<<endl;
            }
            else {
            int half=total/2;
            if (half%2!=0&&count1==0) 
            cout<<"NO\n";
            else 
            cout<<"YES\n";
        }
    }
}