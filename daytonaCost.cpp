#include<bits/stdc++.h>
using namespace std;


int main(){
 
int t;
cin>>t;
while(t--){
    bool f = false;
    int n,k;
    cin>>n>>k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
     cin>>arr[i];
    }
  int d=0;
 
  for (int i = 0; i < n; i++){
    if(k==arr[i]) cout<<"yes"<<endl;
         f = true;
        break;
    }
    if (f!=true)cout<<"no"<<endl;
  }
  
  return 0;
}


