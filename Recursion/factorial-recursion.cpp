#include <iostream>
using namespace std;
int factorial(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }

    return num * factorial(num - 1);
}
int main()
{
    int n = 5;
    cout << "Factorial : " << factorial(n);

    return 0;
}