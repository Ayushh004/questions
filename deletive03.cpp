#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s, t, ans = "";
        cin >> s >> t;

        int a[30];
        memset(a, 0, sizeof(a));

        for (int i = 0; i < t.size(); i++) {
            int x = t[i] - 'A';
            a[x]++;
        }

        for (int i = s.size() - 1; i >= 0; i--) {
            int x = s[i] - 'A';
            if (a[x]) {
                ans += s[i];
                a[x]--;
            }
        }

        reverse(ans.begin(), ans.end());

        if (ans == t)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
