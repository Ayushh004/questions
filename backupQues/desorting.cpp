#include<bits/stdc++.h>
using namespace std;


int main(){
    int t,i;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for ( i = 0; i < n; i++)
        {
          cin>>v[i];
        }
        vector<int>v2;
        if(n==2&&v[0]==v[1]) cout<<"1"<<endl;
        for (int i = 1; i < n; i++)
        {
            if((v[i]-=v[i-1])<0){
                cout<<"0"<<endl;
                return 0;
            }
        
            else{
                v[i]-=v[i-1];
                v2.push_back(v[i]);
            }
            
        }
        int minEle = *min_element(v2.begin(), v2.end());
        int idx;

        for ( i = 0; i < n; i++)
        {
            if(v2[i]==minEle)  idx =i;
            else continue;
        }
        int count=0;

        while(v[idx]>!v[idx+1]){
            v[idx]+=v[idx];
            v[idx+1]-=v[idx+1];
            count ++;
        }
        cout<<count<<endl;
        
    }

}