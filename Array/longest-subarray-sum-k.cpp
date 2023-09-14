#include <bits/stdc++.h>
using namespace std;

// Using 3 loops
int longestSubArray(vector<int> &arr, int k)
{
    int size = arr.size();
    int maxsublength = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
            }
            if (sum == k)
                maxsublength = max(maxsublength, j - i + 1);
        }
    }
    return maxsublength;
}

// Using 2 loops
/*
int longestSubArray2(vector<int> &arr, int k)
{
    int size = arr.size();
    int maxSubLength = 0;
    for (int i = 0; i < size; i++)
    {
        int sum = 0;
        for (int j = i; j < size; j++)
        {
            sum += arr[j];
            if (sum == k)
            {
                maxSubLength = max(maxSubLength, j - i + 1);
            }
        }
    }
    return maxSubLength;
}
*/

// Using hash

int main()
{
    vector<int> arr = {2, 3, 5, 1, 9};

    int k = 11;
    int len = longestSubArray(arr, k);

    cout << "length of longest sub arry with sum " << k << " is " << len;

    return 0;
}