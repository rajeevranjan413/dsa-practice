#include <iostream>
using namespace std;
int min(int arr[], int size)
{
    int minindex = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < arr[minindex])
        {
            minindex = i;
        }
    }
    return arr[minindex];
}
int max(int arr[], int size)
{
    int maxindex = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > arr[maxindex])
        {
            maxindex = i;
        }
    }
    return arr[maxindex];
}
int main()
{
    int arr[20] = {3, 5, 2, 5, 6, 22, 6};
    int size = 7;
    cout << "Minimum is : " << min(arr, size);
    cout << "Maximum is : " << max(arr, size);

    return 0;
}