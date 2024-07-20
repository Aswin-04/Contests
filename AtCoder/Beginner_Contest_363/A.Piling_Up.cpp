#include<bits/stdc++.h>
using namespace std;

int main() {

    int R;
    cin >> R;
    int ans = 0;

    if(R < 100) ans = 100 - R;
    else if(R < 200) ans = 200 - R;
    else if(R < 300) ans = 300 - R;
    else ans = 400 - R;

    cout << ans;
    
    return 0;
}
