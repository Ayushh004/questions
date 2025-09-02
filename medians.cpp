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

  
    ll n,k;
    cin >>n >>k;
    if (n==1)
    {   cout<<1<<endl;
        cout <<1<<endl;
        return;
    }
    if (k%2 == 0)
    { 
        if(k==n || k==1)
        {
            cout<<-1 << endl;
            return;
        }
        else
        {
            cout << 3 << endl;
            cout << 1 << sp << k << sp << k+1 <<endl;
        }
    }
    else{ 
        if(k==1||k==n){
            cout<<-1<<endl;
            return;
        }
        else{
            cout<<3<<endl;
            cout<<1<<sp<<k-1<<sp<<k+2<<endl;
        }
 
    }

}
int main(){
ll t;
cin>>t;
while(t--) solve();
 return 0;
}