#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);

        for (int i = 0; i < n; i++)
        {
          cin>>v[i];
        }
        int count0 = 0;
        int maxlen = 0;

        for (int i = 0; i < n; i++)
        {
            if(v[i]==0)count0++;
            else count0 = 0;
            maxlen = max(maxlen,count0);
        }
        
        cout<<maxlen<<endl;
    }
    return 0;
}