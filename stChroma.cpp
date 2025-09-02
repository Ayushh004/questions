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
  
    
        int n, x;
        cin >>n>>x;
        vec v;
    
        fo(i,x,n) v.pb(i);
         fo(i,0,x)  v.pb(i);
        for (int i = 0; i < v.size(); ++i)
            cout << v[i] <<sp;
        cout << endl;
    
    
}
    

int main(){
int t;
cin>>t;
while(t--) solve();
 return 0;
}