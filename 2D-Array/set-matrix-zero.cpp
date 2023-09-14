#include <bits/stdc++.h>
using namespace std;

// void markRows(vector<vector<int>> &matrix, int row, int col, int i)
// {
//     for (int j = 0; j < col; j++)
//     {
//         if (matrix[i][j] != 0)
//         {
//             matrix[i][j] = -1;
//         }
//     }
// }
// void markCol(vector<vector<int>> &matrix, int row, int col, int j)
// {
//     for (int i = 0; i < row; i++)
//     {
//         if (matrix[i][j] != 0)
//         {
//             matrix[i][j] = -1;
//         }
//     }
// }

// void setZero(vector<vector<int>> &matrix)
// {

//     int row = matrix.size();
//     int col = matrix.size();

//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             if (matrix[i][j] == 0)
//             {
//                 markRows(matrix, row, col, i);
//                 markCol(matrix, row, col, j);
//             }
//         }
//     }

//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             if (matrix[i][j] == -1)
//             {
//                 matrix[i][j] = 0;
//             }
//         }
//     }
// }

void setZero(vector<vector<int>> &matrix)
{
    int row = matrix.size();
    int col = matrix[0].size();

    int rowMark[row] = {0};
    int colMark[col] = {0};

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (matrix[i][j] == 0)
            {
                rowMark[i] = 1;
                colMark[j] = 1;
            }
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (rowMark[i] || colMark[j])
            {
                matrix[i][j] = 0;
            }
        }
    }
}

int main()
{

    vector<vector<int>> matrix = {{1, 3, 0}, {5, 2, 6}, {0, 8, 9}};

    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl
         << endl;

    setZero(matrix);

    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}