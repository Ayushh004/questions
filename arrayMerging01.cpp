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
        cin>>n;
     
        vec A(n), B(n);
        set<int> elements;
        for(int i=0; i<n; i++){
            cin>>A[i];
            elements.insert(A[i]);
        }
     
        for(int i=0; i<n; i++){
            cin>>B[i];
            elements.insert(B[i]);
        }
     
        map<int,int> mp1, mp2;
        int count=1;
        mp1[A[0]] = 1;
        for(int i=1; i<n; i++){
            if(A[i] == A[i-1])
                count++;
            else
                count = 1;
     
            mp1[A[i]] = max(mp1[A[i]], count);
        }
     
        mp2[B[0]] = 1;
        count  = 1;
        for(int i=1; i<n; i++){
            if(B[i] == B[i-1])
                count++;
            else
                count = 1;
     
            mp2[B[i]] = max(mp2[B[i]], count);
        }
     
        int ans = 1;
        for(auto e: elements){
            ans = max(ans, mp1[e] + mp2[e]);
        }
        cout<<ans<<endl;
     
    }

int main(){
int t;
cin>>t;
while(t--) solve();
 return 0;
}