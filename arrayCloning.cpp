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
 
        int n;
        cin >> n;
    
        vector<int> arr(n);
        map<int, int> mp;
    
        fo(i,0,n) {
            cin>>arr[i];
            mp[arr[i]]++;
        }
    
        int freq = 0;
        for (auto it : mp) {
            freq = max(freq, it.second);
        }
    
        int count1 = 0;
        while (freq < n) {
            count1++; 
    
            if (n - freq >= freq) {
                count1 += freq;
                freq *= 2;
            } else {
                count1 += n - freq;
                break;
            }
        }
    
        cout <<count1<< endl;
     
    }
    

int main(){
int t;
cin>>t;
while(t--) solve();
 return 0;
}