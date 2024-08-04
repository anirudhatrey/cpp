#include <bits/stdc++.h>
using namespace std;
int main(){
      #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int n,ans=0;
    cin>>n;
    int arr[n];
    
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int m=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>m){
        m=max(arr[i],m);
      ans=  i==n-1?ans+1: arr[i]>arr[i+1] ? ans+1:ans;
     
        }


        /* code */
    }
    cout<<ans;
    

    return 0;
}