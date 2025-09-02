#include <bits/stdc++.h>
using namespace std;

int main() {

    int x, y;
    cin >> x >> y;

    int mq = x + (10 * y);
    
    if (mq >= 100)  cout << "YES" << endl;
    else cout << "NO" << endl;
    
    return 0;
}
