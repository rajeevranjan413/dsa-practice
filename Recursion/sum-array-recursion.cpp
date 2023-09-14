#include <iostream>
using namespace std;
int getSum(int *arr, int size)
{
    if (size <= 1)
    {
        return arr[0];
    }
    int sum = getSum(arr, size - 1);
    return arr[size - 1] + sum;
}
int main()
{
    int arr[20] = {3, 4, 2, 5, 6, 7};
    int size = 6;
    cout << "Sum is : " << getSum(arr, size);
    return 0;
}