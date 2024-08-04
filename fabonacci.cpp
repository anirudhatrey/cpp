#include<iostream>
using namespace std;

int main(){
    int a=0,b=1,num3=1,upto,i=2;
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    cin>>upto;
    cout<<a<<" , "<<b<<" , ";
    while(i<upto)
    {num3=a+b;
    cout<<num3 <<" , ";
        a=b;
        b=num3;
        
        
        i++;
    }
    return 0;
}