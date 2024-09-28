#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);

    for(int i=0; i < n; i++) {
        cin >> a[i];
    }

    auto min_val_it = min_element(a.begin(), a.end());
    int min_val_index = min_val_it - a.begin();

    a[min_val_index]++;

    int product = 1;

    for(auto it: a) {
        product*=it;
    }

    cout << product << "\n";
}

int main() {

    int t;
    cin >> t;
    
    while(t--) {
        solve();
    }
    
    return 0;
}
