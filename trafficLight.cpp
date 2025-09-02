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
#define len(x) int((x).size())
void solve(){
    int n;
	char c;
	cin>>n>>c;
 
	string s;
	cin>>s;
 
	s.append(s);
 
	int ans = -1e9;
	int last = -1;
	for(int i=len(s)-1; i>=0; i--){
		if(s[i] == 'g')
			last = i;
		if(s[i] == c){
			ans = max(ans, last-i);
		}
	}
	cout<<ans<<endl;
 
}
int main(){
int t;
cin>>t;
while(t--) solve();
 return 0;
}