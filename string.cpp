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
int n ;
string s ;
cin>>n;
cin>>s;

map<char,int>m;

for( auto ch : s)
    m[ch]++;
int ans=0;

for (auto i = m.begin(); i != m.end(); ++i) {
    if (i->second == 1)
        ans += 1;
    else if (i->second > 1)
        ans += 2;
}

cout<<ans<<endl;
}
int main(){
int t;
cin>>t;
while(t--) solve();
 return 0;
}