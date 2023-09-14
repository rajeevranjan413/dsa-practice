#include <iostream>
using namespace std;
int largestColSum(int arr[][2], int row, int col)
{
    int largest = INT_MIN;
    for (int i = 0; i < col; i++)
    {
        int sum = 0;
        for (int j = 0; j < row; j++)
        {
            sum += arr[j][i];
        }
        if (largest < sum)
        {
            largest = sum;
        }
    }
    return largest;
}
int main()
{
    int arr[2][2] = {1, 2, 3, 4};
    cout << "Largest sum is " << largestColSum(arr, 2, 2);
    return 0;

    return 0;
}