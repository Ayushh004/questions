#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define fo(i,a,b) for(ll i=a;i<b;i++)
#define vec  vector<ll>
#define yes "YES"
#define no "NO"
#define pb push_back
#define all(a)  a.begin(),a.end()
#define sort(a) sort(all(a))
#define PI 3.14159265359
#define sp " "
int solve(){
        string s;
        cin>>s;
        
        ull zero = 0; 
        
        
        ull n = s.size();
        
      
        fo(i,0,n) {
            if (s[i] == '0')  zero++;   
        }
        int temp = 0 ;
    
        int count = 0;
        for (int i = n-1; i>=0; i--) {
            if (s[i] == '0')    { count++; }
            else {
                temp = i ;
                break;
            } 
            
        }
    int a=temp-(zero -count );
        int ans = count + a;
        return ans;
    }
    
    

int main(){
int t;
cin>>t;
while(t--) {
    int x;
    x=solve();
    cout<<x;
}
 

 return 0;
}