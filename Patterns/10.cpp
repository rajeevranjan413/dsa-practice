//     *
//    ***
//   *****
//  *******
// *********
//  *******
//   *****
//    ***
//     *
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int space = n - i;
        while (space)
        {
            cout << " ";
            space--;
        }
        int j = 1;
        while (j <= i)
        {
            cout << "*";
            j++;
        }
        int k = 1;
        while (k <= i - 1)
        {
            cout << "*";
            k++;
        }

        i++;
        cout << endl;
    }
    int p = 1;
    while (p <= n - 1)
    {
        int space = p;
        while (space)
        {
            cout << " ";
            space--;
        }
        int total = n + 2;
        while (total >= 1)
        {
            cout << "*";
            total -= 2;
        }
        p++;
        cout << endl;
    }

    return 0;
}