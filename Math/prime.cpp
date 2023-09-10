#include <iostream>
using namespace std;
bool prime(int num)
{
    for (int i = 2; i < num / 2; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    cin >> n;
    bool ans=prime(n);
    if (ans)
    {
        cout << "Prime";
    }
    else
        cout << "Not prime";

    return 0;
}