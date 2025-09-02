#include<bits/stdc++.h>
using namespace std;


#define vec  vector<ull>
#define yes "YES"
#define no "NO"
#define pb push_back


#define PI 3.14159265359
#define sp " "
#define ull unsigned long long
void solve(){
    ull x,n;
    cin>>x>>n;


    ull d; 

    switch(n % 4) {
        case 0:
            d = 0;
            break;
        case 1:
            d = -n;
            break;
        case 2:
            d = 1;
            break;
        case 3:
            d = n + 1;
            break;
    }
    
    if(x%2==0) cout<<x+d<<endl;
    else cout <<x-d<<endl;
}
int main(){
int t;
cin>>t;
while(t--) solve();
 return 0;
}5