// C++ implementation of the approach
#include<bits/stdc++.h>
using namespace std;
 
// Function to return the number of strings
// that can be an acronym for other strings
int count_acronym(int n, string arr[])
{
    // Frequency array to store the
    // frequency of the first character
    // of every string in the array
    int freq[26] = {0};
 
    for (int i = 0; i < n; i++)
        freq[arr[i][0] - 'a']++;
 
    // To store the count of
    // required strings
    int cnt = 0;
 
    for (int i = 0; i < n; i++)
    {
 
        // Current word
        string st = arr[i];
 
        // Frequency array to store the
        // frequency of each of the character
        // of the current string
        int num[26] = {0};
        for (int j = 0; j < st.length(); j++)
            num[st[j] - 'a']++;
 
        bool flag = true;
 
        // Check if the frequency of every character in
        // the current string is <= its value in freq[]
        for (int j = 1; j < 26; j++)
        {
            if (num[j] > freq[j])
            {
                flag = false;
                break;
            }
        }
 
        // First character of the current string
        int x = st[0] - 'a';
        if (freq[x] - 1 < num[x])
            flag = false;
 
        if (flag)
            cnt++;
    }
 
    return cnt;
}
 
// Driver code
int main()
{
    string arr[] = {"abc", "bcad", "cabd",
                    "cba", "dzzz"};
    int n = 5;
    cout << count_acronym(n, arr);
}