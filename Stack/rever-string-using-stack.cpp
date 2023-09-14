#include <iostream>
#include<stack>
using namespace std;
int main()
{
    stack<char> s;
    string str="rajeev";
    for (int i = 0; i < str.length(); i++)
    {
        char ch=str[i];
        s.push(ch);

    }
    str="";
    while (!s.empty())
    {
        char ch=s.top();
        str.push_back(ch);
        s.pop();
    }
    cout<<str;
    
    
    
return 0;
}