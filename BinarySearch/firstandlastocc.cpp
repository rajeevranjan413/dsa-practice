#include <bits/stdc++.h>
using namespace std;
int firstOrc(vector<int> &nums, int element)
{

    // linear Search
    // for (int i = 0; i < size; i++)
    // {
    //     if (nums[i] == element)

    //         return i;
    // }
    // return -1;

    // Binary Search
    int start = 0;
    int end = nums.size() - 1;
    int ans = -1;
    int mid;
    while (start <= end)
    {
        mid = (start + end) >> 1;
        if (nums[mid] == element)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (nums[mid] > element)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}
int lastOrc(vector<int> &nums, int element)
{
    // linear Search
    // for (int i = nums.size() - 1; i >= 0; i--)
    // {
    //     if (nums[i] == element)
    //         return i;
    // }
    // return -1;

    // Binary Search
    int start = 0;
    int end = nums.size() - 1;
    int ans = -1;
    int mid = (start + end) >> 1;

    while (start <= end)
    {

        if (nums[mid] == element)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (nums[mid] > element)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = (start + end) >> 1;
    }
    return ans;
}
int main()
{
    vector<int> nums = {2, 4, 4, 4, 5, 6, 6};
    int ele = 4;
    int first = firstOrc(nums, ele);
    int last = lastOrc(nums, ele);

    cout << "The first and last occurence of element " << ele << " is " << first << " and " << last;

    return 0;
}