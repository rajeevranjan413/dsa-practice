#include <iostream>
#include<stack>
#include<queue>
using namespace std;
void print(queue<int> q){
    while (!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    
}

// Iterative Approach

void reverse(queue<int> &q){
    
    stack<int> s;
    while (!q.empty())
    {
        s.push(q.front());
        q.pop();
    }
    while (!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
    
    
}

// Recursive Approach

void reverseQueue(queue<int> &q){
    if (q.empty())
    {
        return;
    }
    int num=q.front();
    q.pop();
    reverseQueue( q);
    q.push(num);
    
}
int main()
{
    queue<int> q;
    q.push(12);
    q.push(14);
    q.push(4);
    q.push(5);
    q.push(18);
    print(q);
    cout<<endl;
    reverseQueue(q);
    print(q);
    
return 0;
}