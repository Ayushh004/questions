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
int count0=0 , count1=0;
fo(i,0,n){
    cin>>v[i];
    if(v[i]==0) count0++;
    if(v[i]==1) count1++;
}

if(count1==0) cout<<0<<endl;
else
cout<<(1LL<<count0)*count1<<endl;


}
int main(){
int t;
cin>>t;
while(t--) solve();
 return 0;
}