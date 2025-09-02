#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i,a,b) for(int i=a;i<=b;i++)
#define vec  vector<int>
#define yes "YES"
#define no "NO"
#define pb push_back
#define all(a)  a.begin(),a.end()

#define PI 3.14159265359
#define sp " "
void solve(){
int n,k;
cin>>n>>k;

vec v(n);
fo(i,1,n) cin>>v[i];

vector<pair<int,int>>v1;
fo(i,1,n){
    v1.push_back({v[i],i});
}
sort(v1.begin(),v1.end());
int count=0;

    while(v1[n].first <= 0){
        v1[n].first = v1[n].first - k;
        sort(v1.begin(),v1.end());

    }

    fo(i,1,n){
        cout<<v1[i].second<<sp;
    }
    


}
int main(){
int t;
cin>>t;
while(t--) solve();
 return 0;
}