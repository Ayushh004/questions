#include<iostream>
using namespace std;
int main(){
    int a,b,c,n;
    cin>>n;
    int x=0,y=0,z=0;
    for(int i=0;i<n;i++){
        cin>>a>>b>>c;
        x+=a,y+=b,z+=c;
    }
    if(x==0 and y==0 and z==0)
        cout<<"YES";
        else cout<<"NO";

        return 0;

}