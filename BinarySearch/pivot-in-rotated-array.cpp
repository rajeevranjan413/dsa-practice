#include <bits/stdc++.h>
using namespace std;
int pivotIndex(vector<int> &nums)
{
    int start = 0;
    int end = nums.size() - 1;
    int mid = (start + end) >> 1;
    while (start < end)
    {
        if (nums[mid] > nums[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = (start + end) >> 1;
    }
    return end;
}
int main()
{
    vector<int> arr = {7, 9, 11, 0, 1, 3, 5};
    int pivot = pivotIndex(arr);
    cout << "The Pivot element is " << arr[pivot];

    return 0;
}