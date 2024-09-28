#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n = 10;
    vector<string> grid(n);

    for(int i=0; i < n; i++) {
        cin >> grid[i];
    }

    int points = 0;

    for(int i=0; i < n; i++) {
        for(int j=0; j < n; j++) {
            
            if(j < n/2 && grid[i][j] == 'X') {
                points+=(j+1);
            } 

            else if(j >= n/2 && grid[i][j] == 'X') {
                points+=(n-j);
            }
        }

        cout << points << endl;
    }

    cout << points << endl;
}

int main() {

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
    return 0;
}
