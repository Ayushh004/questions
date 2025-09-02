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
cin >>n;


int count1=0, count2=0;

while (n%2==0) {
    n/=2;
    count1++;
}

while (n%3==0) {
    n/=3;
    count2++;
}

if (n!=1) {
    cout <<"-1"<<endl;
    return;
}


if (count1<=count2)
    cout <<(count2-count1)+count2<<endl;
else
    cout << "-1"<<endl;

}
int main(){
int t;
cin>>t;
while(t--) solve();
 return 0;
}