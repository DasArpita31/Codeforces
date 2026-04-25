#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        int uniqueCount = 1;  
        for (int i = 1; i < n; i++) {
            if (a[i] != a[i-1]) 
            uniqueCount++;
        }
        if (uniqueCount <= 2) cout << "Yes\n";
        else cout << "No\n";
    }
}