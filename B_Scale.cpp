#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<string> g(n);
        for(int i=0;i<n;i++)
        cin>>g[i];
        for(int i=0;i<n;i+=k){
            for(int j=0;j<n;j+=k){
                cout<<g[i][j];
            }
            cout<<endl;
        }
    }
}