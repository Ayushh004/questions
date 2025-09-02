#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){

    ll n;
    cin>>n;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
    }
    
   
   for ( int i = 0; i < n; i++)
   {
   if(arr[i]==0) {
    cout<<"0"<<endl;
    return 0;
   }
   }
   ll minele=abs(arr[0]);
    for ( int i = 1; i < n; i++)
   {
   if(abs(arr[i])<minele) minele=abs(arr[i]);
   
   }

   ll count = 0;
   while(minele!=0){
    minele--;
    count ++;
   }

   cout<<count<<endl;
   

return 0;

}


