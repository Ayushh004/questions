#include<bits/stdc++.h>
#define ll long long
using namespace std;




bool even(ll x){
return x%2==0;
}

bool odd(ll x){
return x%2!=0;
}

void solve(){
int t=1;
cin>>t;
while(t--){
ll n,k;
cin>>n>>k;

if(even(n))
cout<<"Yes"<<endl;

else{
if(odd(k))
cout<<"Yes"<<endl;

else
cout<<"No"<<endl;

}

}

}

int main(){
solve();
return 0;

}
