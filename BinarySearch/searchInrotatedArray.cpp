#include <bits/stdc++.h>
using namespace std;

// By getting pivot

/*
int getPivot(vector<int> &arr, int start, int end)
{
    if (start > end)
        return -1;
    int mid = (start + end) >> 1;

    if (mid < end && arr[mid + 1] < arr[mid])
        return mid + 1;

    if (mid > start && arr[mid - 1] > arr[mid])
        return mid;

    if (arr[start] <= arr[mid])
        return getPivot(arr, mid + 1, end);
    else
        return getPivot(arr, start, mid);
}

int binarySearch(vector<int> &arr, int start, int end, int key)
{
    if (start > end)
        return -1;
    int mid = (start + end) >> 1;

    if (arr[mid] == key)
        return mid;

    if (arr[mid] > key)
        return binarySearch(arr, start, mid - 1, key);

    else
        return binarySearch(arr, mid + 1, end, key);
}
*/

// Without getting pivot

int searchInRotatedArray(vector<int> &arr, int start, int end, int key)
{
    if (start > end)
    {
        return -1;
    }

    int mid = (start + end) >> 1;

    if (arr[mid] == key)
    {
        return mid;
    }
    if (key >= arr[0])
    {
        return searchInRotatedArray(arr, start, mid - 1, key);
    }

    return searchInRotatedArray(arr, mid, arr.size() - 1, key);
}

int main()
{
    vector<int> arr = {9, 11, 12, 2, 5, 6, 7};
    // int pivot = getPivot(arr, 0, arr.size() - 1);

    int key = 7;

    /*
    if (key >= arr[0])
    {
        cout << "Element found at index: " << binarySearch(arr, 0, pivot - 1, key);
    }
    else
    {
        cout << "Element found at index: " << binarySearch(arr, pivot, arr.size() - 1, key);
    }

    */
    cout << "Element found at index: " << searchInRotatedArray(arr, 0, arr.size() - 1, key);

    return 0;
}