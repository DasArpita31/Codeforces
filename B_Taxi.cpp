#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int c1=0,c2=0,c3=0,c4=0;
    for (int i=0;i<n;i++) {
        cin >> arr[i];
        if(arr[i]==1) c1++;
        else if(arr[i]==2) c2++;
        else if(arr[i]==3) c3++;
        else if(arr[i]==4) c4++;
    }
    int ans=0;

    ans+=c4;
    ans+=c3;
    c1-=min(c1,c3);
    ans+=c2/2;
    if(c2%2){
        ans++;
        c1-=min(2,c1);
    }
    if(c1>0){
        ans+=(c1+3)/4;
    }
    cout<<ans<<endl;
    return 0;
}