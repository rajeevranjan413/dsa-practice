#include <iostream>
using namespace std;
int compliment(int n)
{
    int num = n;
    int mask = 0;
    while (num)
    {
        num = num >> 1;
        mask = (mask << 1 | 1);
    }
    num = (mask ^ n);
    return num;
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Copliment of the number is: " << compliment(n);

    return 0;
}