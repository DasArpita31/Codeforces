#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin >> s;
        bool same = false;
        for (int i = 0; i + 1 < s.size(); i++) {
            if (s[i] == s[i+1]) {
                same = true;
                break;
            }
        }
        if (same) 
        cout<<1<<endl;
        else 
        cout<<s.size()<<endl;
    }
    return 0;
}
