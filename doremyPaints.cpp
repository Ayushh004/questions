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
         for (ll i = 0; i < n; i++) {
        freqMap[arr[i]]++;
    }
        if(n==2){
            cout<<"yes"<<endl;
        }
        if(n==3){
            ll maxi=LLONG_MIN;
     for ( auto pair : freqMap) {
        
        if(pair.second>maxi){
            maxi=pair.second;
        }
     }
     if(maxi==2)  cout<<"yes"<<endl;
     else cout<<"no"<<endl;
    }
    if(n>3){
        if(freqMap.size()==1) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
       
        }      
    }
    return 0;
}