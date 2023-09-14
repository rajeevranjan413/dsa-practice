#include <bits/stdc++.h>
using namespace std;
int maxSubArraySum(vector<int> &arr)
{
    int size = arr.size();
    int curSum = 0;
    int maxSum = 0;
    for (int i = 0; i < size; i++)
    {
        curSum = curSum + arr[i];

        if (curSum > maxSum)
        {
            maxSum = curSum;
        }
        if (curSum < 0)
        {
            curSum = 0;
        }
    }
    return maxSum;
}
int main()
{
    vector<int> array = {-2, 3, 5, -3, 7, 4, 6, 1};
    int sum = maxSubArraySum(array);
    cout << sum;
    return 0;
}