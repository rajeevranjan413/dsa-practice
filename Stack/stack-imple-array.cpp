#include <iostream>
using namespace std;
class Stack{
        int top;
        int capacity;
        int * stack;
    public:
        Stack(int capacity){
            this->capacity=capacity;
            stack=new int[capacity];
            top=-1;
        }
        bool isEmpty(){
            if (top<0)
            {
                return true;
            }
            else
            return false;
        }
        bool isFull(){
            if (top>=capacity)
            {
                return true;
            }
            else
                return false;
            
        }
        void push(int data){
            if (isFull())
            {
                cout<<"Stack overflow"<<endl;
            }
            else{
                top++;
                stack[top]=data;
            }
            
            
        }
        void pop(){
            if(isEmpty()){
                cout<<"Stack Underflow"<<endl;
            }
            else{
                top--;
            }
        }
        int peek(){
            if(top>=0){

            return stack[top];
            }
            else
            return -1;
        }
        void print(){
            int top=this->top;
            while (top>=0)
            {

                cout<<stack[top]<<" ";
                top--;
            }
            
        }
};
int main()
{
    Stack s(10);
    s.push(10);
    s.push(11);
    s.push(12);
    s.push(13);
    s.push(14);
    s.print(); 
    // cout<<s.peek();
    
return 0;
}