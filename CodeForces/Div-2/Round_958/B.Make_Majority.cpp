#include<bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    // TC for my solution --> O(n+n) --> O(2n)
    
    while(t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;


        if(n == 1) {
            if(s[0] == '0') cout << "No" << "\n";
            else cout << "Yes" << "\n";
        }

        else {

            int cnt1 = 0;
            int cnt0 = 0;

            for(int i=0; i < n; i++) {
                if(s[i] == '1') cnt1++;
            }

            int start = 0;
            for(int i=0; i < n; i++) {
                if(s[i] == '0') {
                    i = start;
                    break;
                }
            }
            for(int i=start; i < n-1; i++) {
                if(s[i] == '0' && s[i+1] == '1') {
                    cnt0++;
                }
            }

            if(s[n-1] == '0') cnt0++;

            if(cnt0 < cnt1) cout << "Yes" << "\n";
            else cout << "No" << "\n";
        }
    }

    // Optimal Solution by up-solving
    // TC --> O(n)

    while(t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int cnt1 = 0;
        int cnt0 = 0;
        int i = 0;

        while(i < n) {
            if(s[i] == '1') {
                cnt1++;
                i++;
            }
            else {
                while(s[i] == '0') {
                    i++;
                }
                cnt0++;
            }
        }

        if(cnt0 < cnt1) cout << "Yes" << "\n";
        else cout << "No" << "\n";

    }
    
    return 0;
}
