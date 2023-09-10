#include <iostream>
#include<stack>
using namespace std;
void pushInBottom(stack<int> &s,int n){
    if (s.empty())
    {
        s.push(n);
        return;
    }
    int num=s.top();
    s.pop();
    pushInBottom(s,n);
    s.push(num);

    
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
    cout<<"Enter the element :";
    int n;
    cin>>n;
    print(s);
    pushInBottom(s,n);
    cout<<endl;
    print(s);
    
return 0;
}