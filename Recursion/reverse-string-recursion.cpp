#include <iostream>
#include <string>
using namespace std;
void reverse(string &word, int start, int end)
{

    if (start >= end)
    {
        return;
    }
    reverse(word, start + 1, end - 1);
    swap(word[start], word[end]);
}
int main()
{
    string word;
    cin >> word;
    // cout << word << endl;
    reverse(word, 0, word.length() - 1);
    cout << word;

    return 0;
}