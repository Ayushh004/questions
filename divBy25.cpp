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
string str = to_string(n);
int l= str.size();

vec v(l);
fo(i,0,n){
    int m;
    m=n%10;
    v[i]=m;
    n=n/10;
}
int count1=0;
int count2=0;
if(v[l-1] != 0,2,5,7){
    v[l-1]=0;
    count1++;
}
if(v[l] != 0,5){
    v[l]=0;
    count2++;
}

cout<<count1+count2<<endl;
}

int main(){
int t;
cin>>t;
while(t--) solve();
 return 0;
}