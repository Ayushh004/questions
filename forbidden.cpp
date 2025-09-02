#include <bits/stdc++.h>
#define ll long long
#define sp " "
using namespace std;





bool even(ll x) {
    return x%2==0;
}

void solve() {

    int n,k,x;
    cin >>n>>k>>x;

    if (x != 1) {
        cout<<"yes"<<endl;
        cout<<endl;
        for(int i = 0; i < n; i++)
            cout<<1<<sp;
        cout<<endl;
    } else {
        if (k==1) {
            cout<<"no"<<endl;
        } else {
         
            if (even(n)) {
                cout<<"yes"<<endl;

                cout<<n/2<<endl;
                for (int i=0;i<n/2;i++)
                    cout<<2<<sp;
                cout<<endl;
            } else {
                if (k >= 3) {
                    cout<<"yes"<<endl;
                    cout<<n/2<<endl;
                    for (int i = 0; i<n/2-1;i++)
                        cout<<2<<sp;
                    cout<<3<<endl;
                } else {
                    cout<<"no"<<endl;
                }

            }

            }
    }
      
}

int main(){
    int t;
    while(t--){
    solve();
    }
    return 0;
}