#include<iostream>
using namespace std;

int main(){
    int T;
    while(T--){
        int N,X,A,B,i;
        cin>>N>>X;
         int sumA=0;
          int sumB=0;

        int arrA [N], arrB [N];
        for(i=0;i<=N-1;i++){
            cin>>arrA[i];
        }

        for(i=0;i<=N-1;i++){
            cin>>arrB[i];
        }
          for(i=0;i<=N-1;i++){
           
           sumA=sumA+arrA[i];
        

        }
          for(i=0;i<=N-1;i++){
         
           sumB=sumB+arrB[i];

        }

        if(sumA>sumB){
            cout<<"YES";
        }
        else
        cout<<"NO";

    }
}