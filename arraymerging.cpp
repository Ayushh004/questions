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
int n;
cin>>n;

vec a(n);
vec b(n);

fo(i,0,n) cin>>a[i];
fo(i,0,n) cin>>b[i];

vec c;

fo(i,0,n) c.pb(a[i]);
fo(i,0,n) c.pb(b[i]);



map<int,int>m;

for(int val : c)
m[val]++;

int maxFreq = 0;
for (auto&pair : m) {
    if (pair.second > maxFreq) {
        maxFreq = pair.second;
     
    }
}

cout<<maxFreq<<endl;



}
int main(){
int t;
cin>>t;
while(t--) solve();
 return 0;
}