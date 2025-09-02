#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i,a,b) for(ll i=a;i<=b;i++)
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
 
	vec v(n+1);
	fo(i,1,n)
		cin>>v[i];
 
	fo(i,2,n-1){
		if(v[i] > v[i-1] && v[i] > v[i+1]){
			cout<<yes<<endl;
			cout<<i-1<<sp<<i<<sp<<i+1<<endl;
			return;
		}
	}
 
 
	cout<<no<<endl;
 
 
}
int main(){
int t;
cin>>t;
while(t--) solve();
 return 0;
}
