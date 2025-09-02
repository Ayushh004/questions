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
ll n;
cin>>n;
vec v(n+1);

for(ll i = 1; i <= n; i++){
cin >> v[i];
}

ll ini = v[n] - v[1]; 

for(ll i = 1; i <= n-1; i++) {
    ini = max(ini, v[n] - v[i]);
}

for(ll i = 2; i <= n; i++) {
    ini = max(ini, v[i] - v[1]);
}

for(ll i = 1; i <= n-1; i++) {
    ini = max(ini, v[i] - v[i+1]);
}

cout << ini <<endl;

}
int main(){
ll t;
cin>>t;
while(t--) solve();
 return 0;
}