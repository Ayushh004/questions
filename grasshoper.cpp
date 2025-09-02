#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll x,k;
        cin>>x>>k;
        if(x%k!=0) cout<<"1"<<endl<<x<<endl;
        else cout<<"2"<<endl<<x-1<<" "<<"1"<<endl;
    }
    return 0;
}