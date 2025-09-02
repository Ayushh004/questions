#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fo(i,a,b) for(ll i=a;i<b;i++)
#define yes "YES"
#define no "NO"
#define pb push_back

void solve() {
    string s, t;
    cin >> s >> t;

    unordered_set<char> apr(t.begin(), t.end());

    string res = "";
    for (char c : s) {
        if (apr.count(c)) {
            res += c;
        }
    }

    vector<char> v;
    for (char c : res) v.pb(c);

    int l = v.size();
    int m = t.length();
    int j = 0;

    for (int i = 0; i <l  && j < m; i++) {
        if (v[i] == t[j]) {
            j++;
        }
    }

    if (j == m) {
        cout << yes << endl;
    } else {
        cout << no << endl;
    }
}

int main() {
    int n;
    cin >> n;
    while(n--) solve();
    return 0;
}
