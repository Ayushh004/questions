#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    unordered_set<int> l;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        l.insert(a[i]);
    }

    unordered_map<int, int> freq;
    for (int num : a) {
        freq[num]++;
        if (freq[num] > 1) {
            cout << "1"<<endl << num << endl;
            return;
        }
    }

    cout << "-1"<<endl;
}

int main() {
   
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
