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

        string s;
        cin>>s;
    
        int n=s.size();
    
        if (s[0] == s[n-1])  cout<<s<<endl;
        else {
            s[n-1] = s[0];
            cout<<s<<endl;
} 
    }
    
int main(){
int t;
cin>>t;
while(t--) solve();
 return 0;
}