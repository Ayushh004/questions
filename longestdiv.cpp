#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long 
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
    int res;
ull n;
cin>>n;
for(int i=1;;i++){
if(n%i!=0){
int res=i-1;
break;
}
}
cout<<res<<endl;
}
int main(){
    
int t;
cin>>t;
while(t--) solve();

 return 0;
}