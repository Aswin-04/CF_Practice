#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> va;

    int i = 0;
    for(string ss: {"mapie", "map", "pie"}) {
        for(size_t pos = 0; (pos = s.find(ss, pos)) != string::npos;) {
            cout << i++ << " --> " << pos << endl;
            s[pos+(ss.length()/2)] = '?';
            va.push_back(pos);
        }
    }

    // cout << va.size() << endl;

}

int main() {

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
    return 0;
}
