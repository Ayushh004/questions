#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
   
    cin>>T;
    while(T--){
        int n,x;
        
        cin>>n;
         
        cin>>x;
        int arr[n];
        int i;
        for(i=0;i<n;i++){
           
            cin>>arr[i];
        }
        int last=0;
        int ans = INT_MIN;
        for ( i = 0; i < n; i++){
            ans = max(ans,arr[i]-last);
            last=arr[i];

        }
        
       ans = max(ans,2*(x-last));
       cout<<ans<<endl;
       

    }
    return 0;
}
