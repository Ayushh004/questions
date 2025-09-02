#include<bits/stdc++.h>
using namespace std;
void solve(){
        int n;
        cin>>n;
        vector<int>v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        int countp=0;
        int countneg=0;
        for (int i = 0; i < n; i++)
        {
            if(v[i]>0)countp++;
            else countneg++;
        }
        if(countneg==n){
            cout<<n<<endl;
            return ;
        }
            
        

        if(countneg%2!=0)cout<<"1"<<endl;
        else cout<<"0"<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }

 
    return 0;

}