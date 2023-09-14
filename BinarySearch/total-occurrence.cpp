#include <iostream>
using namespace std;
int firstOcc(int arr[], int size, int k)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int index = 0;
    while (start <= end)
    {
        if (arr[mid] == k)
        {
            index = mid;
            end = mid - 1;
        }
        else if (arr[mid] < k)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return index;
}
int lastOcc(int arr[], int size, int k)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int index = 0;
    while (start <= end)
    {
        if (arr[mid] == k)
        {
            index = mid;
            start = mid + 1;
        }
        else if (arr[mid] < k)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return index;
}
int main()
{
    int arr[100] = {1, 4, 5, 7, 7, 7, 7, 9};
    int size = 8;
    int key = 9;
    cout << "Total occ is " << (lastOcc(arr, size, key) - firstOcc(arr, size, key)) + 1;
    return 0;
}