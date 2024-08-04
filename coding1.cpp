#include <iostream>
#include<conio.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int rows ,columns,floyed;
    
    cin>>rows;
    cin>>columns;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=columns;j++){
            if(j<=i){
                
                
            switch ((i+j)%2)
            {
            case 0:
                cout<<1;
                break;
            
            default:
            cout<<0;
                
            }
            
            }else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    
   
     return 0 ;
}