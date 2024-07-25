#include<bits/stdc++.h>
using namespace std;

void nonDivisorArray(int n) {

    vector<int> arr(n+1, 1);
    int two_power = 2;
    int minVal = 1;

    for(int i=1; i <= n; i++) {

        if(i == two_power) {
            two_power*=2;
            minVal++;
        }
        arr[i] = minVal;
    }

    cout << minVal << endl;
    for(int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main() {

    int t;
    cin >> t;

    while(t--) {

        int n;
        cin >> n;

        nonDivisorArray(n);
    } 
    
    return 0;
}
