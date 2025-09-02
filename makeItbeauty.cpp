#include <bits/stdc++.h>
using namespace std;
#define sp " "

void solve() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;

        vector<int>v(n);
        for (int i=0; i<n; i++){
            cin>>v[i];
        }

        if(v[0]==v[n-1]){
            cout<<"no"<<endl;
        } 
        else{
            cout<<"yes"<<endl;

            cout<<v[n-1]<<sp<<v[0]<<sp;


            for (int i=1; i<n-1; i++){

                cout<<v[i]<<sp;
            }
            cout<<endl;
            
        }
    }
}

int main() {

    solve();

    return 0;
}
