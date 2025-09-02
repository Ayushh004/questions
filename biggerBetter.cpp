#include <bits/stdc++.h>
using namespace std;





bool inc_half(string &m) {
    int n = m.size();
    for (int i=n-1; i>=0; i--) {
        if (m[i]<'z')  m[i]++;
            for (int j=i+1; j<n; j++)  m[j] ='a';
            return true;
    }
    return false;
}

bool Az(const string &s) {
    for (char c : s) {
        if (c !='z')
            return false;
    }
    return true;
}


void mpalin(const string &m, int n, string &pl) {
    int half = (n=+1)/2;
    pl =m;
    int sm =(n%2==0)?half-1:half-2;
    for (int i = sm; i >= 0; i--) {
        pl += m[i];
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string A;
        cin >> A;

        if (Az(A))  cout << "-1\n"; continue;
        
        int half = (n + 1) / 2;
        string m = A.substr(0, half);
        string cdt;
        mpalin(m,n,cdt);

        if (cdt <= A) {
           
            if (!inc_half(m)) cout << "-1\n"; continue;
            mpalin(m, n, cdt);
        }

        cout << cdt << "\n";
    }
    return 0;
}
