#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin>>t;

    while (t--) {
        int n;
        string s;
        cin>>n>>s;

        int l=0;
        int x=n-1;
        while (l<x && s[l]!=s[x]) {
        l++;
         x--;
    }
    int ans = x-l+1;

        cout<<ans<<endl;
    }
}

int main() {
    solve();

    return 0;
}
