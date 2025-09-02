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

    vector<ll>v;

    fo(i,0,n){
        if(s[i] =! " "){
            cin>>v[i];
        }
        else continue;
    }

    fo(i,0,n){
        if(s[i] == 0){
            if(s[i+1]){

            }
            cin>>v[i];
        }
        else continue;
    }


}
int main(){
int t;
cin>>t;
while(t--) solve();
 return 0;
}