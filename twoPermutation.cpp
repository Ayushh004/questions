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
        while (t--){
            
            int n,a,b;
            cin>>n>>a>>b;
    
            if(a+b>=n-1){
                if(a==n && b==n) cout<<"yes"<<endl;
                else cout<<"no"<<endl;
            }
            else{
                cout<<"yes"<<endl;
            }
        }
    }
    

 int main(){

 solve();
 return 0;

}