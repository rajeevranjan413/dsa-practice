#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_set<int> s;

    for (int i = 1; i <= 10; i++)
    {
        s.insert(i);
    }

    for (auto i = s.begin(); i != s.end(); i++)
    {
        cout << *i << " ";
    }

    return 0;
}