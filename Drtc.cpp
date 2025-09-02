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
            string s;
            cin >>n>>s;
    
            int to = 0;
    
            fo(i,0,n) {
                fo(j,0,n) {
                    if (j == i) {
                        if (s[j] == '0') to += 1;
                    } else {
                        if (s[j] == '1') {
                            to += 1;
                        }
                    }
            }
    
           
        }
        cout <<to<< endl;
    }
    
    
    
int main(){
int t;
cin>>t;
while(t--) solve();
 return 0;
}