#include <bits/stdc++.h>
#define ll long long
using namespace std;


void solve() {
    int t=1;
    cin>>t;
    while (t--) {
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        
        if (b>d)
            cout<<-1<<endl;
        else {
            if ((a+d-b)<c)
                cout << -1 << endl;
            else
                cout << (2 * (d - b) + a - c) << endl;
        }

    }
    
}


int main() {
    solve();
    return 0;
}
