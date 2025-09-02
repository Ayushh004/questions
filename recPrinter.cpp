#include<iostream>
using namespace std;
int main(){
 
    int T;
    cin >> T;

    while (T--) {
        int N, M, K;
        cin >> N >> M >> K; 

       int md;

        for (int l = 1; l <= N; ++l) {
            for (int w = 1; w <= M; ++w) {
                int perimeter = 2 * (l + w); 
                int diff = abs(perimeter - K);
                md = min(md, diff); 
            }
        }

        cout << md << endl;
    }
    return 0;
}


