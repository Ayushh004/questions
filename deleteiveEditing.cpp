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
void solve(){
string s,t;
cin>>s >>t ;
unordered_set<char>apr(t.begin(), t.end());


    string res = "";
    for (char c : s) {
        if (apr.count(c)) { //count() ka function ye hota hai ki woh 1 dega agr hai aur 0 dega agr nhi hai
            res += c;
        }
    }
    int n=res.length();

    vec v;
    fo(i,0,n){
        v[i]=res[i];
    }

   

    int l = v.size();
    int m = s.length();
    int j = 0; 

    for (int i = 0; i < l && j < m; i++) {
        if (v[i] == s[j]) {
            j++; 
        }
    }

    if (j == m) {
        cout <<yes<< endl;
    } else {
        cout <<no<< endl;
    }


}



int main(){
int n;
cin>>n;
while(n--) solve();
 return 0;
}