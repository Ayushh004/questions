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
    
string s;
cin >> s;
    
        int maxi=1, cnt=1;
        fo(i,1,n){
            if(s[i] == s[i-1])
                cnt++;
            else
                cnt = 1;
    
            maxi = max(maxi, cnt);
        }
        int z = maxi+1;
    
        cout <<z<<endl;
    }
    

int main(){
int t;
cin>>t;
while(t--) solve();
 return 0;
}