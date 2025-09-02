#include <bits/stdc++.h>
using namespace std;

void solve(){
    int t;

    cin>>t;

    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++) {
            cin >> v[i];
        }

        for(int i=0; i<n; i++){
            int x=n+1-v[i];
            cout<<x<<" ";
        }

        cout<<endl;

    }
}

int main() {
    solve();

    return 0;

}
