#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n = 10;
    vector<string> grid(n);

    for(int i=0; i < n; i++) {
        cin >> grid[i];
    }

    vector<vector<int>> points_arr = {
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
        {1, 2 ,3, 3, 3, 3, 3, 3, 2, 1},
        {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
        {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
        {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
        {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
        {1, 2 ,3, 3, 3, 3, 3, 3, 2, 1},
        {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    };

    int points = 0;

    for(int i=0; i < 10; i++) {
        for(int j=0; j < 10; j++) {
            if(grid[i][j] == 'X') points+=points_arr[i][j];
        }
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
