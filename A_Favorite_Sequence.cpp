#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> b(n);
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
            vector<int> a;
            int l = 0, r = n - 1;
            while (l <= r) {
            a.push_back(b[l]); 
            l++;
            if (l<=r){
                a.push_back(b[r]);
                r--;
            }
        }
        for (int i = 0; i < n; i++) {
        cout << a[i];
        if (i<n-1) 
        cout<<" ";
        }
        cout<<endl;

    }    
}