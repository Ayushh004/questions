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
    string s;
    cin >> s;

    int zc = count(s.begin(), s.end(), '0'); 
    int oc = s.length() - zc;         

    int tm = min(zc, oc);

    if (tm % 2 == 0) cout <<"NET"<<endl;
    else cout <<"DA"<< endl;
}
int main(){
int t;
cin>>t;
while(t--) solve();
 return 0;
}