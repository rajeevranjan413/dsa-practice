#include <iostream>
#include<stack>
using namespace std;
void solve(stack<int> &s,int count,int size){
    if (count==size/2)
    {
        s.pop();
        return;
    }

    int num=s.top();
    s.pop();
    solve(s,count+1,size);
    s.push(num);

    
}
void removeMiddle(stack<int> &s){
    int count=0;
    solve(s,count,s.size());
}
int main()
{
    stack<int> s;
    s.push(11);
    s.push(13);
    s.push(55);

    removeMiddle(s);
    while (!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();

    }
    
    
return 0;
}