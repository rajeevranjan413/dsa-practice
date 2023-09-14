#include <iostream>
using namespace std;

void merge(int arr1[], int arr2[], int m, int n)
{
    int i = 0, j = 0, k = 0;
    while (i < m && j < n) 
    {
        if (arr1[i] < arr2[j])
            arr1[k++] = arr1[i++];
        else
            arr1[k++] = arr2[j++];
    }
    while (i < m)
        arr1[k++] = arr1[i++];
    while (j < n)
        arr1[k++] = arr2[j++];
}

int main()
{
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8};
    int m = sizeof(arr1)/sizeof(arr1[0]);
    int n = sizeof(arr2)/sizeof(arr2[0]);

    merge(arr1, arr2, m, n);

    cout << "Merged array is: \n";
    for (int i=0; i < m+n; i++)
        cout << arr1[i] << " ";

    return 0;
}
