#include <iostream>
using namespace std;
void rowWiseSum(int arr[][2], int row, int col)
{

    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        cout << "The " << i << "th row sum is " << sum << endl;
    }
}
void colWiseSum(int arr[][2], int row, int col)
{
    int sum = 0;
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            sum += arr[j][i];
        }
        cout << "The " << i << "th column sum is " << sum << endl;
    }
}
int main()
{
    int arr[2][2] = {1, 2, 3, 4};
    rowWiseSum(arr, 2, 2);
    cout << endl;
    colWiseSum(arr, 2, 2);

    return 0;
}