#include <bits/stdc++.h>
using namespace std;


int exRound(int n) {
    int count=0;
    for (int i=1; i<=n; i++) {
        string st = to_string(i);
        int nonZeroCount=0;
        for (char c:st) {
            if (c != '0') nonZeroCount++;
        }
        if (nonZeroCount==1) count++;
    }
    return count;
}

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        cout << exRound(n) << endl;
    }
    return 0;
}
