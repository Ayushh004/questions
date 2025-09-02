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
void generate(string s, int n){

if(s.length()==n) {
    cout<<s<<endl;
     return;
}
generate(s+'0',n);
if(s=="" || s[s.length()-1] == '0') generate(s+'1',n);
}
int main(){
 int n;
 n=3;
 generate("",n);
 return 0;
}