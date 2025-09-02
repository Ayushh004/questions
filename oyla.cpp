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
 
	int mini = INT_MAX;
	vec min2;
	for(int i=0; i<n; i++){
		int m;
		cin>>m;
 
		vec arr(m);
		for(int i=0; i<m; i++)cin>>arr[i];
 
		int min_el = *min_element(all(arr));
		mini = min(min_el, mini);
 
		arr.erase(find(all(arr), min_el));
 
		min2.pb(*min_element(all(arr)));
 
	}
	ll beauty = mini + accumulate(all(min2), 0LL) - *min_element(all(min2));
	cout<<beauty<<endl;
}
int main(){
int t;
cin>>t;
while(t--) solve();
 return 0;
}