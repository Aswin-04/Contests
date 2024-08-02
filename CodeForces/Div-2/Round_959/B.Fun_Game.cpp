#include<bits/stdc++.h>
using namespace std;

int countLeadingZeros(string s) {
    
    int cnt = 0;
    for(auto it: s) {
        if(it == '1') break;
        cnt++;
    }

    return cnt;
}

string solve(int n, string s, string t) {

    if(s == t) return "Yes";
    if(n == 1) {
        
        if(s[0] == '1' && t[0] == '0') return "Yes";
        else return "No";
    }

    int lz_in_s = countLeadingZeros(s);
    int lz_in_t = countLeadingZeros(t);

    if(lz_in_s <= lz_in_t) return "Yes";
    else return "No";

    return "-1";
}

int main() {

    int t;
    cin >> t;

    while(t--) {

        int n;
        string s, t;

        cin >> n;
        cin >> s;
        cin >> t;

        cout << solve(n, s, t) << endl;
    }
    
    return 0;
}
