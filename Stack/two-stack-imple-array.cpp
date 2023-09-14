#include <iostream>
using namespace std;
class TwoStack{
        int top1;
        int top2;
        int size;
        int *stack;
    public:
        TwoStack(int size){
            this->size=size;
            top1=-1;
            top2=size;
            stack=new int[size]; 
        }
        void push1(int data){
            if (top2-top1>1)
            {
                top1++;
                stack[top1]=data;
            }
            
        }
        void push2(int data){
            if (top2-top1>1)
            {
                top2--;
                stack[top2]=data;
            }
            
        }
        void pop1(){
            if (top1>=0)
            {
                top1--;
            }
            

        }
        void pop2(){
            if (top2<size)
            {
                top2++;
            }
            
        }
        int peek1(){
            if (top1>=0)
            {
                return stack[top1];
            }
            else
            return -1;
            
        }
        int peek2(){
            if (top2<size)
            {
                return stack[top2];
            }
            else
                return -1;
            
        }
        void print1(){
            int top1=this->top1;
            while (top1>=0)
            {
                cout<<stack[top1]<<" ";
                top1--;
            }
            
        }
        void print2(){
            int top2=this->top2;
            while (top2<size)
            {
                cout<<stack[top2]<<" ";
                top2++;
            }
            
        }

};
int main()
{
    TwoStack s(10);
    s.push1(12);
    s.push2(23);
    s.push1(4);
    s.push2(73);
    s.push1(52);
    s.push2(93);
    // cout<<s.peek1();
    cout<<endl;
    // cout<<s.peek2();
    s.print1();
    cout<<endl;
    s.print2();
    cout<<endl;
    s.pop1();
    s.pop2();
    s.print1();
    cout<<endl;
    s.print2();
    
return 0;
}