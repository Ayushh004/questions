#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin >> n;
    
        vector<int> v(n);
        int countneg = 0, countp = 0;
        for(int i = 0; i < n; i++) {
            cin >> v[i];
    
            if(v[i] == -1) 
                countneg++;
            else 
                countp++;
        }
    
        
        if(countneg <= countp) {
            
            if(countneg % 2 != 0)  cout << 1 << endl;
            else cout << 0 << endl;

        } 

        else {
               int ans = countneg - n / 2;

     
               if((n/2) % 2 != 0) 
                ans += 1;
    
            cout << ans << endl;
        }
    }
    
    return 0;
}