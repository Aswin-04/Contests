#include<bits/stdc++.h>
using namespace std;

int main() {

    int n, t, p;
    cin >> n >> t >> p;

    vector<int> nums(n);

    for(int i=0; i < n; i++) {
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end(), greater<int>());

    if(nums[p-1] >= t) {
        cout << "0";
    } else {
        cout << t - nums[p-1];
    }
    
    return 0;
}
