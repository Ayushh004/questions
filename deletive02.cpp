#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i,a,b) for(ll i=a;i<b;i++)
#define vec  vector<ll>
#define yes "YES"
#define no "NO"
#define pb push_back
#define all(a)  a.begin(),a.end()
#define sort(a) sort(all(a))
#define PI 3.14159265359
#define sp " "



void solve() {
    string s, t;
    cin >> s >> t;

    map<char, int> m1, m2;

    for (auto ch : s){

     m1[ch]++;
    }
    for (auto ch : t){

     m2[ch]++;
    }

   

    int i = 0, j = 0;
    while (i < s.size() && j < t.size()) {
        if (s[i] == t[j]) {
            if (m1[s[i]] < m2[t[j]]){
                break;
            }

            if (m1[s[i]] == m2[t[j]]){
            j++;
            m2[t[j]]--;
        
            }
        }
            
            
        
        m1[s[i]]--;
            i++;
       
    }

    if (j == t.size()) {
        cout <<yes<< endl;
    } else {
        cout <<no<< endl;
    }
}

int main() {
    int n;
    cin >> n;
    while (n--) solve();
    return 0;
}
