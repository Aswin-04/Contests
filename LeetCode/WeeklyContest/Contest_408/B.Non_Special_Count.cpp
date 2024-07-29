#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n) {

    if(n == 1) return false;
    if(n == 2) return true;
    if(n%2 == 0) return false;

    for(int i=3; i*i <= n; i+=2) {

        if(n%i == 0) return false;
    }

    return true;
}

int nonSpecialCount(int l, int r) {
    
    int temp1 = sqrt(l);
    int temp2 = sqrt(r);

    int ans = 0;

    for(int i=temp1; i <= temp2; i++) {

        if(i*i < l || i*i > r) continue;
        if(isPrime(i)) ans++; 
    }

    return (r-l+1) - ans;
}


int main() {

  int l, r;
  cin >> l >> r;

  int ans1 = nonSpecialCount(l, r);
  cout << ans1 << endl;

    return 0;
}
