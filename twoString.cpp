#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string A, B;
        cin >> A >> B;

        int n = A.size(), m = B.size();
        int i = 0, j = 0, cost = 0;

        // Traverse through A to try and match all characters of B
        while (i < n && j < m) {
            if (A[i] == B[j]) {
                j++;  // Character in B found in A
            } else {
                cost += (i + 1);  
                // Remove A[i] with cost i+1
            }
            i++;
        }

        // If we've matched all characters of B, the transformation is possible
        if (j == m) {
            // Remove any remaining characters in A
            while (i < n) {
                cost += (i + 1);  // Remove remaining characters from A
                i++;
            }
            cout << cost << endl;
        } else {
            // If we couldn't match all characters of B, it's not possible
            cout << -1 << endl;
        }
    }

    return 0;
}
