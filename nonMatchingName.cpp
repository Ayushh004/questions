#include<iostream>
using namespace std;

int main(){
    int T;
    while(T--){
        int N,i;
        cin>>N;
        int arr[N+1];

        for(i=0;i<=N+1;i++){
            cin>>arr[i];
        }
        for(i=0;i<=N+1;i++){
            if(arr[i]<= 2*arr[N+1]){
                int temp;
                temp = arr[i];
                arr[i] = arr[N+1];
                arr[N+1] = temp;
            }
            
        }
        for(i=0;i<=N;i++){
          int sum = arr[i] + arr[i+1];
           
        }
        cout<<"sum";

    }
}