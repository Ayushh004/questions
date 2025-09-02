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
 
	string s;
	cin>>s;

 
	map<char,int> l, r;
	for(auto ch:s)
		r[ch]++;
 
	int score = 2;
	
	for(int i=0; i<n-1; i++){
		char ch = s[i];
 
		
		l[ch]++;
		if(r[ch] == 1)
			r.erase(ch);
		else
			r[ch]--;
 
		
		int candidate = int((l).size()) + int((r).size());
		score = max(score,candidate);
 
	}
	cout<<score<<endl;
 
 
 
}	

int main(){
int t;
cin>>t;
while(t--) solve();
 return 0;
}
