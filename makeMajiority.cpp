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
ll n;
cin>>n;
string s;
cin>>s;
int count1,count2;
string s1 = "";
count1 = 0; count2 = 0;
if (s[0] == '0') count2++;
else count1++;

fo(i, 0, s.size()) {
    if (s1.size() == 0) s1 += s[i];
    else {
        if (s[i] == '1'){ s1 += s[i]; count1++;}
        else {
            if (s1.back() == '1') {
                s1 += '0';
                count2++;
            }
        }
    }
}
if(count1>count2){
     cout<<yes<<endl;
      return;
}
cout<<no<<endl;
return;

}
int main(){
ll t;
cin>>t;
while(t--) solve();
 return 0;
}