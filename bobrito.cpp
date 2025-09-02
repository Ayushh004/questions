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
   
      
      
    
        
            int n,m,l,r;
        cin >>n>>m>>l>>r;
    
            
            int ln = -l;
    
            int lm = (m < ln ? m : ln);
            int rm = m - lm;
    
           
            cout<<-lm<<sp<<rm<<endl;
        }
    
      
    

int main(){
int t;
cin>>t;
while(t--) solve();
 return 0;
}
