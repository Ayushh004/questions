#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i,a,b) for(ll i=a;i<b;i++)
#define vec  vector<ll>
#define yes "YES"
#define no "NO"
#define pb push_back
#define all(a)  a.begin(),a.end()
#define sort(a) sort(all(a))
#define PI 3.14159265359
#define sp " "
void solve(){

        int n, x;
        cin >> n >> x;
    
        vec v(n);
        fo(i,0,n)
            cin >> v[i];
    
        ll ma = accumulate(all(v), 0LL);
        ll mi = ma/x + (ma%x != 0);
    
        ll bma = 0;
        for(auto a : v){
            bma = bma + a / x + (a % x != 0);
        }
    
        cout <<mi<<sp<<bma<<endl;
    }
    

int main(){
int t;
cin>>t;
while(t--) solve();
 return 0;
}