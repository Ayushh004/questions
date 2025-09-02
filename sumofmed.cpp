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


vec v(n*k);
fo(i,0,n*k){
cin>>v[i];
}
int i=0,j=n*k;

vec m;
while(j != i+1){
   if(i==0)j=j-(k-1);
   else j=j-k;

    m.push_back(v[j-2]);
    i++;
}

ll sum = accumulate(m.begin() ,m.end(), 0ll);

cout<<sum<<endl;

}
int main(){
int t;
cin>>t;
while(t--) solve();
 return 0;
}