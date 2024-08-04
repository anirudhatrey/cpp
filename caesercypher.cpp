#include<iostream>
#include<string.h>

using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    char text[100];
    int key,i,left;
    cin.getline(text,100);
    cin>>key;
int size=strlen(text);

if(key<=0){
    cout<<"invalid key";
    }else{
        for(i=0;i<size;i++){
           if(text[i]>=65 && text[i] <= 90 || text[i]>=97 && text[i] <= 122 || text[i]>=48 && text[i]<=57){ 
            text[i]=text[i]+key;}
        }
    }


    
cout<<text;



    return 0;
}