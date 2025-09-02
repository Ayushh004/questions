#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i,a,b) for(ll i=a;i<b;i++)
#define vec  vector<int>
#define yes "YES"
#define no "NO"
#define pb push_back
#define all(a)  a.begin(),a.end()
#define sort(a) sort(all(a))
#define PI 3.14159265359
#define sp " "
void solve(){
    int n, k;
    cin>>n>>k;
    vec v(n);
    fo(i,0,n) cin>>v[i];
    int d = k-1;
    int ec = 0;
    fo(i,0,n){
        if ((v[i])%2 == 0) ec++;
    
        if (v[i] % k == 0)
            d=0;
        else
            d = min(d, k-v[i] % k);
    }
    
    if (k != 4)  cout <<d<< endl;
     else {
        if (ec >= 2) cout <<0<< endl;
        else if (ec == 1)
            cout << min(d, 1) << endl;
        else 
            cout <<min(2, d)<< endl;
    }
    
}
int main(){
int t;
cin>>t;
while(t--) solve();
 return 0;
}