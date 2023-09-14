#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int first = 0;
    int second = 1;
    cout << first << " " << second<<" ";
    for (int i = 0; i < n - 2; i++)
    {
        int nextnumber = first + second;
        cout << nextnumber << " ";

        first = second;
        second = nextnumber;
    }

    return 0;
}