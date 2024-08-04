#include <iostream>
using namespace std;

void SelectionSort(int n, int arr[])
{
    // Select Min and swap to current
    for (int i = 0; i < n; i++)
    {
        int min = i;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void BubbleSort(int n, int arr[])
{
    // Push the max to the end
    for (int i = 0; i < n; i++)
    {
        int swap = 0;
        for (int j = i; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                swap = 1;
            }
        }
        if (swap == 0)
            break;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void InsertionSort(int n, int arr[])
{
    // Take Element Place at its correct position by shifting untill smallest found
    for (int i = 0; i < n; i++)
    {
        int j = i;
        while (j > 0 && arr[j] < arr[j - 1])
        {
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
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
    InsertionSort(n, arr);
    return 0;
}