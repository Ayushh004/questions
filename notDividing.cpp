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
    
    vec v(n);
    fo(i,0,n) {
        cin >> v[i];
        if (v[i] == 1)
            v[i] += 1;
    }
    
    fo(i,1,n) {
        if (v[i] % v[i - 1] == 0)
            v[i]++;
    }
    
    for (auto a : v)
        cout << a << sp;
    
    cout <<endl;
    
}
int main(){
int t;
cin>>t;
while(t--) solve();
 return 0;
}