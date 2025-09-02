#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i,a,b) for(ll i=a;i<b;i++)
#define vec vector<ll>
#define yes "YES"
#define no "NO"
#define pb push_back
#define all(a) a.begin(),a.end()
#define sort(a) sort(all(a))
#define PI 3.14159265359
#define sp " "



   void solve(){
        ll n, x;
        cin >>n>>x;

        if (x==n) {
            fo(i, 0, n) {
                cout << i;
                if (i + 1 < n) cout << sp;
                else cout << endl;
            }
          
        }

        fo(i,0,x) cout << i << sp;
        fo(i,x+1,n) cout << i << sp;
        cout <<x<< endl;
    }

    


int main(){
int t;
cin>>t;
while(t--) solve();
 return 0;
}
