#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        int ele;
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        int sum = accumulate(v.begin(), v.end(), 0);
        if(sum%2==0)cout<<"yes"<<endl;
        else cout<<"no"<<endl;

    }
    return 0;
}