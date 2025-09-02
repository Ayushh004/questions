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
        cin >> n;
        vec a(n), b(n);
        fo(i,0,n)
        cin >> a[i];
        
        fo(i,0,n)
         cin >> b[i];
        
        ll ans = a[n-1];
        fo(i,1,n) 
        {
            if (a[i-1] > b[i]) 
            {
                ans += (a[i-1] - b[i]);
            }
        }
        cout <<ans<<endl;
         
    }
    

int main(){
int t;
cin>>t;
while(t--) solve();
 return 0;
}

