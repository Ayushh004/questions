#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        ll d = 0;
        bool f = false;
        for (ll i = 0; i < n; i++)
        {
            d = arr[i];
            if (d == k)
            {
                cout << "yes" << endl;
                f = true;
                break;
            }
        }
        if (f != true)
            cout << "no" << endl;
    }
    return 0;
}