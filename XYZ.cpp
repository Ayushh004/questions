#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;  // Read the number of test cases
    vector<int> results;

    while (T--) {
        int X, Y, Z;
        cin >> X >> Y >> Z;  // Read X, Y, Z

        if (2 * Y == X + Z) {
            results.push_back(0);  // Already in AP
        } else if (2 * Y < X + Z || 2 * Y > X + Z) {
            results.push_back(1);  // Can be made AP with 1 operation
        }
    }

    // Print results for each test case
    for (int result : results) {
        cout << result << endl;
    }

    return 0;
}
