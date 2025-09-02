#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;

        vector<int>v(n);
        for (int i=0; i<n; i++)
            cin>>v[i];
 
        bool yes = false;
        for (int i=0; i<n; i++) {

            for (int j =i+1; j<n; j++) { 

                if (__gcd(v[i], v[j])<= 2) {
                    
                    yes = true;
                    break;
                }
            }
            if (yes) break; 
        }

        if(yes)
            cout<<"yes"<<endl;

        else
            cout<<"no"<<endl;
    }
    
    return 0;
}
