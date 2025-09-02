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
        int n,p;
        cin>>n>>p;
     
        vec A(n);
        fo(i,0,n) cin>>A[i];
           
        vec B(n);
        fo(i,0,n)   cin>>B[i];
          
     
        vector<pair<ll,ll>> costc;
        costc.pb({p, n+1});
        for(int i=0; i<n; i++)
            costc.pb(make_pair(B[i], A[i]));
     
        sort(costc);
     
        int total = 1;
        ll cost = p;
        int idx = 0;
        while(total < n){
            int left = n - total;
     
            if(costc[idx].second <= left){
                total += costc[idx].second;
                cost = cost + costc[idx].first * 1LL * costc[idx].second;
            }else{
                total = n;
                cost = cost + left*1LL*costc[idx].first;
            }
            idx++;
        }
        cout<<cost<<endl;
     
     
    }	


int main(){
int t;
cin>>t;
while(t--) solve();
 return 0;
}