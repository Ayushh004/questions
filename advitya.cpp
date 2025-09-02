#include<iostream>
#include <bits/stdc++.h>
 using namespace std;


 int main(){
    int t;
    while(t--){
        char str[8];
        cin>>str;
        char arr[8];
        char brr[8] = {'A','D','V','I','T','I','Y','A'};
        int count =0;

        for(int i=0;i<8;i++){
            if(arr[i]!=brr[i]){
                while(arr[i]==brr[i]){
                    arr[i]=arr[i]+1;
                    count++;
                }
            }
            else continue;

        }
    }
    return 0;

 }
