#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int m,a,b,c;
        cin>>m>>a>>b>>c;
        int row1=min(a,m);
        int row2=min(b,m);
        int s=min(c,(m-row1)+(m-row2));
        cout<<row1+row2+s<<endl;
    }
}
