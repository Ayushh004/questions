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
 
	vec arr(n);
	for(int i=0; i<n; i++)
		cin>>arr[i];
 
	if(n%2==0){
		cout<<2<<endl;
		cout<<1<<sp<<n<<endl;
		cout<<1<<sp<<n<<endl;
	}else{
		cout<<4<<endl;
		
		cout<<1<<sp<<n-1<<endl;
		cout<<1<<sp<<n-1<<endl;

		cout<<n-1<<sp<<n<<endl;
		cout<<n-1<<sp<<n<<endl;
}
}
int main(){
int t;
cin>>t;
while(t--) solve();
 return 0;
}