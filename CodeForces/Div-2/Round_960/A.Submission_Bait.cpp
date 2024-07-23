#include<bits/stdc++.h>
using namespace std;

// Upsolved problem

int main() {

    int t;
    cin >> t;
    while(t--) {
        
        int n;
        cin >> n;

        vector<int> nums(n);

        for(int i=0; i < n; i++) {
            cin >> nums[i];
        }
        
        sort(nums.begin(), nums.end(), greater<int>());

        int cnt = 1;

        for(int i=1; i < n; i++) {
            if(nums[i] == nums[i-1]) {
                cnt++;
            } else {
                if(cnt%2 == 1) {
                    break;
                }
                cnt = 1;
            }
        }

        if(cnt%2 == 1) cout << "Yes" << endl;
        else cout << "No" << endl; 
    }

    
    return 0;
}
