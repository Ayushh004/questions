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
// start your code here...|HI MY NAME SI AYUSH SRIVASTABA NA DI AM TRULING TH


   
        int n;
        cin >> n;

        vector<int>v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }

        int xSum = accumulate(v.begin(), v.end(), 0, bit_xor<int>());

        if (n%2 != 0)  cout << xSum << endl;
    
        else
            if (xSum == 0)  cout << 0 << endl;
               
            else  cout <<-1<< endl; 
    }



int main(){
int t;
cin>>t;
while(t--) solve();
 return 0;
}