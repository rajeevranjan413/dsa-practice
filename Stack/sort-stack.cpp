#include <iostream>
#include<stack>
using namespace std;
void Insert(stack<int> &s, int num){
    if ((!s.empty()&& s.top()<num) || s.empty())
    {
        s.push(num);
        return;
    }
    int n=s.top();
    s.pop();
    Insert(s,num);
    s.push(n);
    
}
void sortStack(stack<int> &s){
    if (s.empty())
    {
        return;
    }
    int num=s.top();
    s.pop();
    sortStack(s);
    Insert(s,num);
    
}
void print(stack<int> s){
    while (!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    
}

int main()
{   stack<int> s;
    s.push(14);
    s.push(11);
    s.push(13);
    // print(s);
    sortStack(s);
    cout<<endl;
    print(s);
    
return 0;
}