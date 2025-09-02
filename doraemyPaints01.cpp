#include<iostream>
#include<unordered_map>
#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
    ll t;
    cout<<"enter t";
    cin>>t;
    while(t--){
        ll n;
        cout<<"enter n";
        cin>>n;
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cout<<"enter a[i]";
            cin>>arr[i];
        }
          unordered_map<ll, ll> freqMap;
          bool yes = true;
         for (ll i = 0; i < n; i++) {
        freqMap[arr[i]]++;
        
        if(freqMap.size()>2){
            yes= false;
            break;
        }
    }
if(freqMap.size() ==1){

}
if(freqMap.size()==2){
    int f1 = begin(freqMap)->second;

    if(f1!=n/2 && f1 != (n+1)/2) yes = false;
}
if(yes)cout<<"yes"<<endl;
else cout<<"no"<<endl;
    }
} 