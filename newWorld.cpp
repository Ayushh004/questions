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
        int t;
        cin>>t;
        fo(i,0,t) {
            int n, k, p;
            cin >>n>>k>>p;
    
            if (k < 0)k = k * (-1);
            int c = k/p;
            if ((k % p) > 0) c = c + 1;
        
    
            if (c > n){  cout<<-1<< endl;}
            else {cout<<c<<endl;}
            
        }
       
    }

    
    

int main(){
int t;
cin>>t;
while(t--) solve();
 return 0;
}