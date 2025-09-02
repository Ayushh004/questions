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


int main(){
string s;
cin >> s;
int n= s.length();
reverse(s.begin(), s.end());

fo(i,0,n){
  if(s[i] == ' ' && s[i+1] == ' '){
    s.erase(i,1);
  }

  else continue;
}
cout<<s;
}

