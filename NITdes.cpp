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
cin >> n;

vec v(n + 1);  
for(int i=1; i<=n; i++)
    cin>>v[i];

int l=-1, r=-1;

for(int i=1; i<=n; i++) {
    if(v[i]!=0) if(l == -1 && r == -1)  l=r= i;

         else     r = i;
        
    }
    if (l == -1 && r == -1)  cout <<0<< endl;
     else {
       
        for (int i = l; i <= r; i++) {
            if (v[i] == 0) {
                cout <<2<<endl;
                return;
            }
        }
        cout << 1 << endl;
    }
    
   
}


int main(){
int t;
cin>>t;
while(t--) solve();
 return 0;
}