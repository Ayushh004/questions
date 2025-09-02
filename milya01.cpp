#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n), b(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    
    
    sort(a.begin(), a.end());
    
    set<int> uni;
    
 
    for (int i = 0; i < n; i++) {
        uni.insert(a[i] + b[i]);
    }
    
   
    if (uni.size() >= 3) {
        cout << "YES"<<endl;
    } else {
        cout << "NO"<<endl;
    }
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
