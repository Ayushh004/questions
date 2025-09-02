#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;

        vector<int> v(n+1);
        for (int i=1; i<=n;i++) {
            cin>>v[i];
        }

        bool found=false;

        int x=count(v.begin()+1, v.end(),2); 
        int y=0;

        for (int j=1; j<=n; j++) { 
            if (v[j]==2) {
                y++;

                x--;
            }

            if (y==x) {
                cout<<j<<endl;
                found=true;
                break;

            }
        }
        if (!found) cout<<-1<<endl;
    }

    return 0;
    
}
