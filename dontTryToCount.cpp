#include <bits/stdc++.h>
using namespace std;


int main(){
    int t,n,m;
    cin>>t;
    while(t--){
        string x;
        cin>>x;
        string m;
        cin>>m;

        string full=x;
        string subf=m;

        
    char pos = full.find(subf);
     int count=0;
    while(pos != string::npos) {
       if (pos != string::npos) {
        cout << count;
    } else {
       
        full+=full;
        count ++;
    }
       
        
    }

    }
}