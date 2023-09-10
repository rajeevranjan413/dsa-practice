#include <bits/stdc++.h>
using namespace std;
// string toBinary(int n)
// {
//     char bits[100];
//     while (n)
//     {
//         bits = bits + char(n % 10);
//         n = n / 10;
//     }
//     return bits;
// }
int main()
{
    int n;
    cout << "Enter no: ";
    cin >> n;
    // cout << toBinary(n);
    int result = n % 10;
    cout << result;
    return 0;
}