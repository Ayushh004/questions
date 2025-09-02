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
ll n,k,x;
cin>>n>>k>>x;
ll lower = (k * (k + 1)) / 2;
ll upper = (n * (n+1))/2 - ((n-k) * (n-k+1))/2;

if (x>=lower && x<=upper) cout<<yes<<endl;
else cout<<no<<endl;

}
int main(){
ll t;
cin>>t;
while(t--) solve();
 return 0;
}