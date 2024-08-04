#include <bits/stdc++.h>
using namespace std;
int printPattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=1 ;j<=n+1-i;j++){
            cout<<j<<" ";
        }
cout<<endl;
    }
    return 0;
}
int main(){
    printPattern(5);
return 0;
}

