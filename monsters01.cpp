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

        int n,k;
        cin>>n>>k;
    
        vec v(n);
        fo(i,0,n) 
            cin>>v[i];
      
    
        vector<pair<int,int>> hx;
        
        fo(i,0,n){
            if(v[i]%k == 0)
                hx.pb({k,-i});
            else
                hx.pb({v[i]%k, -i});
        }
    
      
        sort(hx);
    
        for(int i=n-1; i >= 0; i--){
            cout<<abs(hx[i].second) + 1<<sp;
        }
    }

int main(){
int t;
cin>>t;
while(t--) solve();
 return 0;
}