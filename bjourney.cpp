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
    
        ll n, a, b, c;
        cin >>n>>a>>b>>c;
        ll ans = (n / (a+b+c));
        n %= (a+b+c);
        ans *= 3;
        if (n == 0) cout << ans;
        
        else if (n - a <= 0)   cout << ans + 1;
        
        else if (n - a - b <= 0)  cout << ans + 2;
        
        else   cout << ans + 3;
        
        cout << endl;
    }
    

int main(){
int t;
cin>>t;
while(t--) solve();
 return 0;
}