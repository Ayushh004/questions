#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        // Special case when there are exactly 2 elements and they are the same
        if (n == 2 && v[0] == v[1]) {
            cout << "1" << endl;
            continue;  // Instead of return 0
        }

        vector<int> v2;
        for (int i = 1; i < n; i++) {
            int diff = v[i] - v[i - 1];
            if (diff < 0) {
                cout << "0" << endl;
                 // Avoids unnecessary computations
            }
            v2.push_back(diff);
        }

        // Find the minimum element and its index in v2
        int minEle = *min_element(v2.begin(), v2.end());
        int idx = -1;
        for (int i = 0; i < v2.size(); i++) {
            if (v2[i] == minEle) {
                idx = i;
                break;  // Stop at first occurrence
            }
        }

        int count = 0;
        while (idx < n - 1 && v[idx] > v[idx + 1]) {
            v[idx] += v[idx];
            v[idx + 1] -= v[idx + 1];
            count++;
        }

        cout << count << endl;

    nextTestCase:;  // Label for skipping test case
    }

    return 0;
}
