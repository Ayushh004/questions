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
 
    int n, k, x;
    cin >>n>>k>>x;

    if (x != 1)
    {
        cout <<yes<<endl;
        cout <<n<<endl;
        for (int i=0; i<n; i++)
            cout << 1 <<sp;
        cout <<endl;
    }
    else
    {
        if (k == 1) cout <<no<<endl;
         else
        {
         
            if (n%2==0)
            {
                cout <<yes<<endl;
                cout << n/2<<endl;
                for (int i=0; i < n/2; i++)
                    cout << 2 << sp;
                cout <<endl;
            }
            else
            {
                if (k>=3)
                {
                    cout <<yes<<endl;
                    cout << n/2<<endl;
                    for (int i = 0; i<n/2-1; i++)
                        cout << 2 << sp;
                    cout << 3 <<endl;
                }
                else
                {
                    cout <<no<<endl;
                }
            }
        }
    }
}



int main(){
int t;
cin>>t;
while(t--) solve();
 return 0;
}