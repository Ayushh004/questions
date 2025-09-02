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
    int n,k,q;
	cin>>n>>k>>q;
 
	vec v(n);
	fo(i,0,n)
		cin>>v[i];
 
 
	ll temp = 0;
	ll suba = 0;
	fo(i,0,n){
		if(v[i] <= q)suba++;
		else{
			if(suba >= k){
				temp += (suba*1LL*(suba+1))/2 - ((k-1)*suba - ((k-2)*(k-1))/2);
			}
			suba = 0;
		}
	}
	if(suba >= k)
		temp += (suba*1LL*(suba+1))/2 - ((k-1)*suba - ((k-2)*(k-1))/2);
 
	cout<<temp<<endl;
 
}
int main(){
int t;
cin>>t;
while(t--) solve();
 return 0;
}