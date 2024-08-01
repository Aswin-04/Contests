#include<bits/stdc++.h>
using namespace std;

void solve(unsigned long long n, vector<int> binary) {

    int onesCount = __builtin_popcountll(n);

    if(onesCount == 1) {
        cout << 1 << endl << 1 << endl;
        return;
    }

    cout << onesCount+1 << "\n";

    int leadingZeros = __builtin_clzll(n);
    int powers = 64 - leadingZeros - 1;

    for(int i= leadingZeros; i < 64; i++) {

        if(powers < 0) break;
        if(binary[i] == 1) {
            unsigned long long val = n - (1ULL << powers); 
            cout << val << " ";
        }
        powers--;
    }

    cout << n << endl;
}

int main() {

    int t;
    cin >> t;
    while(t--) {

        unsigned long long n;
        cin >> n;

        vector<int> binary(64, 0);

        for(int i=0; i < 64; i++) {
            binary[i] = (n >> i) & 1;
        }

        reverse(binary.begin(), binary.end());

        solve(n, binary);
    }

    return 0;
}
