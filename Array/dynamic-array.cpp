#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array :";
    cin >> n;
    cout << "Array created" << endl;
    int *arr = new int[n];
    cout << "Enter the array element :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Element is :";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}