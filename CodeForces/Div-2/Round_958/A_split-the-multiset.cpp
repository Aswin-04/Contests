#include<bits/stdc++.h>
using namespace std;

// https://codeforces.com/contest/1988/problem/A --> Problem Link
// Up-solved problem

int main() {

    int t;
    cin >> t;
    while(t--) {
        int n;
        int k;
        cin >> n >> k;

        if(n == 1) cout << "0" << "\n";
        else {
            int rem = n;
            int cnt = 0;

            while(true) {
                rem -= (k-1);
                cnt++;

                if(rem <= 1) {
                    cout << cnt << "\n";
                    break;
                }
            }
        }
    }
    return 0;
}
