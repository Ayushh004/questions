#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin >> s;
    
        int n = s.length();  
        int one = count(s.begin(), s.end(), '1'); 
        int zer = n - one;
    
        int i;
        for (i = 0; i < n; i++) {
            if (s[i] == '0') {
                if (one > 0)
                    one--;
                else
                    break;
            } else { 
                if (zer > 0)
                    zer--;
                else
                    break;
            }
        }
    
        cout << n - i << endl; 
       
    }
    return 0;
    }
