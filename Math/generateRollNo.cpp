#include <bits/stdc++.h>
using namespace std;
int roll(int appNo, int k)
{
    vector<int> digits;
    while (appNo)
    {
        digits.insert(digits.begin(), appNo % 10);
        appNo = appNo / 10;
    }
    int digit, number = 0;
    for (int i = 0; i < digits.size(); i++)
    {

        digit = digits[(i + k - 1) % digits.size()];
        number = number * 10 + digit;
        // cout << digits[i];
    }
    return number;
}

int main()
{
    int appNO = 23456; // roll=45623
    int k = 3;
    cout << roll(appNO, k);

    return 0;
}