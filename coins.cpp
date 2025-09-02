#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n,k;
    cin>>n>>k;
    for (long long y = 0; y * k <= n; ++y) {
        if ((n-y*k) %2== 0) {
            cout<<"YES"<<endl;

            return;

        }
    }
    cout << "NO"<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--) {


        solve();

    }
    return 0;
    
}
