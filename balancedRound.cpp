#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
ll t;
cin>>t;

while(t--){
ll n,k;
cin>>n>>k;

vector<ll>vec(n);
for(ll i=0;i<n;i++){
cin>>vec[i];
}

sort(vec.begin(),vec.end());

ll mg=1,cg=1;

for(int i=1;i<n;i++){
if(vec[i]-vec[i-1]<=k){
cg++;
}
else{
mg=max(mg,cg);
cg=1;
}
}
mg=max(mg,cg);

cout<<n-mg<<endl;
}

return 0;
}