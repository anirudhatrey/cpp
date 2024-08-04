#include <iostream>
using namespace std;

void pattern(int rows)
{
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= 2*rows; j++)
        {
            if(j > rows-i && j-rows <= i-1)
            cout << rows << " ";
            else
            cout << " " << " ";
        }
        cout << endl;
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
    // int arr[n];
    // for (int i = 0; i < n; i++)
    //     cin >> arr[i];
    pattern(n);
    return 0;
}