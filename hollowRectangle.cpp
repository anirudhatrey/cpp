#include <bits/stdc++.h>
#include <iostream>
#include<conio.h>
using namespace std;


int hollowRectangle(int rowNum){
    for(int i=1;i<=rowNum;i++){
        for(int j=1;j<=rowNum;j++){
            if(j<=i){
                cout<<" * ";
            }
        }
        cout<<endl;
    }    
    return 0;
}



int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int numRows=5,numCols=4;
    cin>>numRows;
    cin>>numCols;
    hollowRectangle(numRows);
    return 0;
}
