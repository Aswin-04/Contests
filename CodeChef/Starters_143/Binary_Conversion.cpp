#include<bits/stdc++.h>
using namespace std;

void solve(int n, int k, string s, string t) {

    int z = 0;
    int o = 0;

    for(int i=0; i < n; i++) {
        if(s[i] != t[i]) {
            if(s[i] == '1') o++;
            else z++;
        }
    }

    if(z != o || k < z) {
        cout << "No" << endl;
        return;
    }

    if(n == 2) {
        if(z == 1 && k % 2 == 0) {
            cout << "No" << endl;
            return;
        }

        else if(s == t && s[0] != s[1] && k%2 == 1) {
            cout << "No" << endl;
            return;
        }
    }

    cout << "Yes" << endl;
}


int main() {

    int t;
    cin >> t;
    
    while(t--) {
        
        int n, k;
        string s, t;

        cin >> n >> k;
        cin >> s;
        cin >> t; 
            
        solve(n, k, s, t);
    }
    
    return 0;
}
