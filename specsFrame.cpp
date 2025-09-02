#include<iostream>
using namespace std;
int main(){
    int X,Y;
    cout<<"enter the price of plastic frame :";
    cin>>X;
    cout<<"enter the price of metal frame :";
    cin>>Y;

    if(Y<=2*X){
        cout<<"METAL";
    }
    else
    cout<<"PLASTIC";
    
    return 0;


}