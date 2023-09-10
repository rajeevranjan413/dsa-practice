#include <iostream>
using namespace std;
int **create(int m, int n)
{
    int **arr = new int *[m];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }
    return arr;
}
int main()
{
    int m, n;
    cout << "Enter the row :";
    cin >> m;
    cout << "Enter the column :";
    cin >> n;
    int **arr = create(m, n);
    cout << "Enter the element :";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "The element is"<<endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}