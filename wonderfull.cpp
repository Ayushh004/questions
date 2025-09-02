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
        vec v(n);
        v[0] = 0;
        int l = 0, r = 0;
        fo(i,0,n-1){
            if (s[i] == '<')    v[i + 1] = --l;
            else    v[i + 1] = ++r;
         
        }
        fo(i,0,n)    cout << v[i]-l+1 <<sp;
        
        cout<<endl;
    }

int main(){
int t;
cin>>t;
while(t--) solve();
 return 0;
}