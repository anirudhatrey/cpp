#include <bits/stdc++.h>
#include <iostream>
#include<conio.h>
using namespace std;

int binarySearch(int n,int key,int array[]){
int lb=0,ub=n-1;
int m;
for(int i=lb;m<ub&&i<n;i++){
    m = ((lb + ub )/2 )+1;
if(m==key){
    return i;
}else if(m<key){
    lb=m;
}else{
    ub=m;
}
}
return -1;
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int numRows=5;
    int numCols[numRows];
    int key=0;
    cin>>numRows;
    for(int i = 0; i<numRows;i++)
    cin>>numCols[i];
    cin>>key;
    cout<<binarySearch(numRows,key,numCols);
    return 0;
}