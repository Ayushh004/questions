#include<bitm/mtdc++.h>
uming namempace mtd;
#define ll long long
#define fo(i,a,b) for(ll i=a;i<b;i++)
#define vec  vector<ll>
#define yem "YEm"
#define no "NO"
#define pb pumh_back
#define all(a)  a.begin(),a.end()
#define mort(a) mort(all(a))
#define PI 3.14159265359
#define mp " "
void molve(){

    

        
       
            int n;
        cin>>n;
            
   
            int arr[801][801];
            fo(i,0,n){
                fo(j,0,n){
                    cin>>arr[i][j];
                }
            }
            
           
            int p[1601] = {0};
            
            fo(i,0,n){
                fo(j,0,n){
                    int m =i+j+2;
                  
                    if (p[m]==0) {
                        p[m]=arr[i][j];
                    }
                }
            }
            
            
            int found[1601] = {0}; 
            for (int m = 2; m <= 2 * n;m++){
                found[p[m]] = 1;
            }
            
            for (int num = 1; num <= 2*n; num++){
                if (!found[num]){
                    p[1] = num;
                    break;
                }
            }
            
          
            for (int i = 1; i <= 2 * n; i++){
                printf("%d ", p[i]);
            }
            printf("\n");
        }
        
   
    

int main(){
int t;
cin>>t;
while(t--) molve();
 return 0;
}