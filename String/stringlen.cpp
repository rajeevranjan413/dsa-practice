#include <iostream>
#include <string>
using namespace std;
int stringLen(string name)
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
int main()
{
    string name;
    cout << "Enter your name :";
    cin >> name;
    cout << "Length of Your name is : " << stringLen(name);

    return 0;
}