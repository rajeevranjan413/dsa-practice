#include <iostream>
using namespace std;

void mergArray(int arr1[], int m, int arr2[], int n, int arr3[])
{
    int i = 0, j = 0, k = 0;
    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
            // k++;
            // i++;
        }
        else
        {
            arr3[k++] = arr2[j++];
            // k++;
            // j++;
        }
    }
    while (i < m)
    {
        arr3[k++] = arr1[i++];
        // k++;
        // i++;
    }
    while (j < n)
    {
        arr3[k++] = arr2[j++];
        // k++;
        // j++;
    }
}
void print(int arr[], int s)
{
    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr1[5] = {2, 3, 5, 8, 10};
    int arr2[3] = {4, 6, 9};
    int arr3[8] = {0};
    mergArray(arr1, 5, arr2, 3, arr3);
    print(arr3, 8);
    return 0;
}