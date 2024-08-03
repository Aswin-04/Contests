#include<bits/stdc++.h>
using namespace std;

void solve(int n, int x, int y) {

    vector<int> ans(n, 1);

    x-=1;
    y-=1;

    for(int i=y-1; i >= 0; i--) {

        if(ans[i+1] == 1) ans[i] = -1;
        else ans[i] = 1;
    } 

    for(int i=x+1; i < n; i++) {

        if(ans[i-1] == 1) ans[i] = -1;
        else ans[i] = 1;
    }

    for(int i=0; i < n; i++) {
        cout << ans[i] << " ";
    }
}

int main() {

    int t;
    cin >> t;

    while(t--) {

        int n, x, y;
        cin >> n >> x >> y;

        solve(n, x, y);
    }

    
    return 0;
}
