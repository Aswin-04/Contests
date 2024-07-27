#include<bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<string> dishes(n);

    for(int i=0; i < n; i++) {
        cin >> dishes[i];
    }
    
    for(int i=0; i < n-2; i++) {

        if(dishes[i] == "sweet" && dishes[i+1] == "sweet") {
            cout << "No";
            return 0;
        }
    }

    cout << "Yes";
    return 0;
}
