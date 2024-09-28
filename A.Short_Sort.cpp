#include<bits/stdc++.h>
using namespace std;

void solve() {
    
    string str;
    cin >> str;

    if(str[0] == 'a' || str[1] == 'b' || str[2] == 'c') cout << "YES";
    else cout << "NO";

    cout << "\n";
}

int main() {

    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    
    return 0;
}
