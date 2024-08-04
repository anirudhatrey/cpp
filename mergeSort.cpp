#include <iostream>
#include <vector>
using namespace std;

void Merge(int arr[], int l, int m, int r)
{
        vector<int> temp ={};
        int left = l;//3
        int right = m+1;//4
        while(left<=m && right<=r){
            if(arr[left]<arr[right])
            {
                temp.emplace_back(arr[left]);
                //cout<<arr[left]<<" ";
                left++;
            }else{
                temp.emplace_back(arr[right]);
                //cout<<arr[right]<<" ";
                right++;
            }
        }
        
        while(left<=m){
         temp.emplace_back(arr[left]);
                left++;
        }
        while(right<=r){
            temp.emplace_back(arr[right]);
                right++;
        }

        for(int i=l; i<=r; i++){
            arr[i]=temp[i-l];
             cout<<arr[i]<<" ";
        }
        cout<<endl;
}

void MergeSort(int arr[], int low, int high)
{
    //Divide recursively till there is only one element left

    //base condition
    if(low>=high) return ;
    
    int mid=(low+high)/2;
    
    MergeSort(arr, low, mid);
    MergeSort(arr, mid+1, high);

    Merge(arr, low, mid, high);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    MergeSort(arr, 0, n-1);
    return 0;
}