#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i,a,b) for(ll i=a;i<b;i++)
#define vec  vector<ll>
#define odd(n) n%2 != 0
#define yes "YES"
#define no "NO"
#define pb push_back
#define all(a)  a.begin(),a.end()
#define sort(a) sort(all(a))
#define PI 3.14159265359
#define sp " "
void solve(){
    
        ll n;
        cin >> n;
    
        if(odd(n))
            cout << -1 <<endl;
        else{
            n = n / 2;
            if(n == 1)
                cout <<-1<<endl;
            else
                cout<<(n/3 + (n%3 !=0 ? 1:0)) <<sp<<n/2<<endl;
        }
    }
    
    
    

int main(){
int t;
cin>>t;
while(t--) solve();
 return 0;
}