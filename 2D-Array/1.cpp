#include <iostream>
using namespace std;
void inputRowWise(int arr[][4], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
}
void inputColWise(int arr[][4], int row, int col)
{
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cin >> arr[j][i];
        }
    }
}
void print(int arr[][4], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }
}
bool search(int arr[][4], int row, int col, int target)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}
int main()
{
    int arr[3][4];
    // inputRowWise(arr, 3, 4);
    inputColWise(arr, 3, 4);
    print(arr, 3, 4);
    bool ans = search(arr, 3, 4, 8);
    if (ans)
    {
        cout << "Found";
    }
    else
    {
        cout << "Not found";
    }

    return 0;
}