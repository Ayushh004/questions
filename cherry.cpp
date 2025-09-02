#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i,a,b) for(ll i=a;i<b;i++)
#define vec  vector<ll>
#define yes "YES"
#define no "NO"
#define pb push_back
#define all(a)  a.begin(),a.end()
#define allr(a)  a.rbegin(),a.rend()
#define PI 3.14159265359
#define sp " "
void solve(){

ll n,k;
cin>>n>>k;
vec a(n),b(n);
fo(i,0,n) cin>>a[i];
fo(i,0,n) cin>>b[i];
ll mini = 0;
fo(i,0,n){
    if(b[i]==-1) mini++;
}
if(mini==n){
    
  sort(all(a));
  ll reach = a[0]+k;
  ll ans = reach - a[n-1];
  cout<< ans+1<<endl;
}
else{
   ll notmo = 0;  fo(i,0,n){
    if(b[i]!=-1){
        notmo = a[i]+b[i];
     break;
  }
    }
  fo(i,0,n){
        if(b[i]==-1){
          ll temp1 = notmo-a[i];
    
          if(temp1>k){         cout<<0<<endl;
            return;
          }
          if(temp1<0){           cout<<0<<endl;
  return;
          }
        }
        else{
            ll temp2 = a[i]+b[i];
          if(temp2!=notmo){
                cout<<0<<endl;       return;
            }
                   }
    }
    cout<<1<<endl;
   }
   
}
 
 
int main(){
ll t;
cin>>t;
while(t--) solve();
 return 0;
}