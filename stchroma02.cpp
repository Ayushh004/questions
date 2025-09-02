#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i,a,b) for(ll i=a;i<b;i++)
#define vec  vector<ll>
#define yes "YES"
#define no "NO"
#define pb push_back
#define all(a)  a.begin(),a.end()
#define allr(a)  a.rbegin(),a.rend()
#define PI 3.14159265359
#define sp " "
void solve(){

ll n,x;
cin>>n>>x;
vec ans;
fo(i,0,n){
    if(i!=x) ans.pb(i);
}
if(ans.size()!=n)ans.pb(x);
fo(i,0,n){
    cout<<ans[i]<<sp;
}
cout<<endl;
}
int main(){
ll t;
cin>>t;
while(t--) solve();
 return 0;
}