#include<bits/stdc++.h>
using namespace std;

int main() {

    int t;
	cin >> t;
	while(t--) {
	    
	    int n, x;
	    cin >> n >> x;
	    
	    int loss = 0;
	    int wins = 0;
	    int ans = 0;
        
        int i = 1;
        
        while(i <=  n-x) {
            int val = pow(2, i);
            loss+=val;
            i++;
        }
        
        while(i <= n) {
            int val = pow(2, i);
            wins+=val;
            i++;
        }
        
        ans = wins - loss;
        cout << ans << endl;
	}
    
    return 0;
}
