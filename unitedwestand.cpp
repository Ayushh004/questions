#include<bits/stdc++.h>
using namespace std;

int main(){
    int t ;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
    vector<int>arr(n);
for(int i=0; i<n; i++){
    cin>>arr[i];
}

map<int,int> mp;
for(auto a: arr){
    mp[a]++;
}

if(mp.size() == 1) cout<<"-1"<<endl;
 else {
    int no = begin(mp)->first; 
    int times = begin(mp)->second;
    cout<<times<<" "<<n-times<<endl;

    for(int i=0; i<times; i++)
        cout<<no<<" ";
    cout<<endl;
    

    mp.erase(no); 
    for (auto it : mp) {
        int e = it.first;
        int f = it.second;
        for (int i = 0; i < f; i++) {
            cout << e << endl;
        }
    }
    
    cout<<endl;
}
}
return 0;

}