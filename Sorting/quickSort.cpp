#include <iostream>
using namespace std;
int partition(int *arr, int start, int end)
{
    int pivot = arr[start];
    int i = start + 1;
    int j = end;
    while (i <= j)
    {
        while (arr[i] < pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j++;
        }
        swap(arr[i], arr[j])
    }
}
void quickSort(int *arr, int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int p = partition(arr, start, end);
    quickSort(arr, start, p);
    quickSort(arr, p + 1, end);
}
int main()
{
    int arr[4] = {2, 1, 4, 5};
    int size = 4;
    quickSort(arr, 0, size - 1);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}