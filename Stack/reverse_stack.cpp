#include <iostream>
#include<stack>
using namespace std;
void insertAtBottom(stack<int> &s,int ele){

    if (s.empty())
    {
        s.push(ele);
        return;
    }
    int num=s.top();
    s.pop();
    insertAtBottom(s,ele);
    s.push(num);

    
}
void reverseStack(stack<int> &s ){
    if (s.empty())
    {
        return;
    }
    int num=s.top();
    s.pop();
    reverseStack(s);
    insertAtBottom(s,num);

    
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
    s.push(10);
    s.push(11);
    s.push(13);
    print(s);
    reverseStack(s);
    cout<<endl;
    print(s);
    
return 0;
}