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
    string s;
    cin >> s;
    ll n = s.size();
    map<char, int> l, r;
    for (auto ch : s) r[ch]++;
    int ans = 2;
    fo(i,0,n-1){
        l[s[i]]++;
        if (r[s[i]] == 1) r.erase(s[i]);
        else r[s[i]]--;
        int cur = l.size() + r.size();
        ans = max(ans, cur);
    }
    cout << ans << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
