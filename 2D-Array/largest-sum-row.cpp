#include <iostream>
using namespace std;
int largestRowSum(int arr[][2], int row, int col)
{
    int large = INT_MIN;
    for (int i = 0; i < row; i++)
    {
        int sum = 0;

        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        if (large < sum)
        {
            large = sum;
        }
    }
    return large;
}
int main()
{
    int arr[2][2] = {1, 2, 3, 4};
    cout << "Largest sum is " << largestRowSum(arr, 2, 2);
    return 0;
}