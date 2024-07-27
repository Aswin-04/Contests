#include<bits/stdc++.h>
using namespace std;

int main() {

    int h, w, m, n;
    cin >> h >> w;
    cin >> m >> n;

    char arr[h][w];

    for(int i=0; i < h; i++) {
        for(int j=0; j < w; j++) {
            cin >> arr[i][j];
        } 
    }

    string x;
    cin >> x;

    m--;
    n--;

    for(int i=0; i < x.size(); i++) {
        char ch = x[i];
        if(ch == 'U') {
            if(m-1 < 0) continue;
            if(arr[m-1][n] == '.') m--;
        }

        else if(ch == 'D') {
            if(m+1 > h-1) continue;
            if(arr[m+1][n] == '.') m++;
        }

        else if(ch == 'L') {
            if(n-1 < 0) continue;
            if(arr[m][n-1] == '.') n--;
        } 

        else {
            if(n+1 > w-1) continue;
            if(arr[m][n+1] == '.') n++;
        }
    }

    cout << m+1 << " " << n+1;
    
    return 0;
}
