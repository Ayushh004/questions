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
vector<int> v;
void initialize(){
    


    for(int i = 1; i <= 100000; i *= 10){
        for(int j = 1; j <= 9; j++){
            v.push_back(i * j);
        }
    }
}


void solve(){

    int x;
    cin >> x;
    int m = 0;
    for(auto y : v){
        if(y <= x) m++;
        else break;
        
    }
    cout << m << endl;
    
}


int main(){
int t;
cin>>t;
initialize();
while(t--) solve();
 return 0;
}