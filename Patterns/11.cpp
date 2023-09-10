//    *
//   ***
//  *****
// *******

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int space = n - row;
        while (space != 0)
        {
            printf(" ");
            space = space - 1;
        }
        int j = 1;
        while (j <= row)
        {
            printf("*");
                }
        int k = 1;
        while (k <= row - 1)
        {
            printf("*");
            k++;
        }
        row++;
        cout << "\n";
    }

    return 0;
}