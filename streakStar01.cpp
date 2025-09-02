#include<bits/stdc++.h>
using namespace std;

int streak(const vector<int>& arr) {
    int n = arr.size();
    int msub = 1, cstreak = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] >= arr[i-1]) {
            cstreak++;
        } else {
            msub = max(msub, cstreak);
            cstreak = 1;
        }
    }
    return max(msub, cstreak); 
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        
        int msub = streak(arr);

        
        for (int i = 0; i < n; i++) {
            
            int pval = arr[i];
            arr[i] *= x;

            
            msub = max(msub, streak(arr));

            
            arr[i] = pval;
        }

        
        cout << msub << endl;
    }

    return 0;
}
