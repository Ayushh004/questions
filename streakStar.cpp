#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin>>arr[i];
        }
        

        for (int i = 1; i < n; i++)
        {
          
          if(arr[i]<arr[i-1]){
            arr[i]*=x;
           
            break;
          }
          
          else continue;
        }
        int count=0;
        for (int i = 1; i < n; i++)
        {
          if(arr[i]>arr[i-1]){ count++;
           
           }
          else break;
        }
        cout<<count+1<<endl;
    }
    return 0;
}