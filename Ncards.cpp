#include<iostream>
using namespace std;

int main(){
    int T,N,X ;
    cin>>T;
    while(T--){
        cin>>N>>X;
        int arr[N];
        int count = 0;
        for(int i=0;i<=N-1;i++){
            arr[i]=i+1;

        }
        for(int i=0;i<=N-1;i++){
            if( X==arr[i]){
                continue;
            }
            if((X+arr[i])%2==0){
                
                count++;

            }
            else
            continue;
        }
       cout<<count;
    }
}