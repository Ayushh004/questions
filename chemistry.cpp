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
    string s;
    cin>>s;
    map<char, int> mp;
for(auto ch : s)
    mp[ch]++;
    

int odd = 0;
for(auto it : mp){
    int freq = it.second;

    if(freq%2!=0)
        odd++;
}

if(k < odd - 1) cout <<no<<endl;
else cout<<yes<<endl;


}
int main(){
int t;
cin>>t;
while(t--) solve();
 return 0;
}