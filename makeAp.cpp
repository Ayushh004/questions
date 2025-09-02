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
  

        ll a, b, c;
        cin >> a >> b >> c;
    
        bool up = false;
    
 
        if ((2 * b - c) % a == 0 && (2 * b - c) / a > 0) {
            up = true;
        }
    

        if ((c + a) % (2 * b) == 0) {
            up = true;
        }
    
    
        if ((2 * b - a) % c == 0 && (2 * b - a) / c > 0) {
            up = true;
        }
           if (a == b && b == c) {
            up = true;
        }
    
        if(up==true)cout<<yes<<endl;
        else cout<<no<<endl;
        
    }
    

int main(){
int t;
cin>>t;
while(t--) solve();
 return 0;
}