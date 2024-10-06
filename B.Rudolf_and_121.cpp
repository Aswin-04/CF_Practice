#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i=0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i=1; i < n-1; i++) {
        if(arr[i-1] == 0) continue;
        else if(arr[i-1] > 0) {
            int x = arr[i-1];
            arr[i-1] = 0;
            arr[i]-=(2*x); 
            arr[i+1]-=x;
        }
        else {
            cout << "NO" << endl;
            return;
        }
    }

    if(arr[n-1] != 0 || arr[n-2] != 0) {
        cout << "NO" << endl;
    }

    else cout << "YES" << endl;

}

int main() {


    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    
    return 0;
}
