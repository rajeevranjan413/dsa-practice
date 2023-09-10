#include <iostream>
using namespace std;
class Queue{
        int front;
        int rear;
        int size;
        int * arr;
    public:
        Queue(int size){
            this->size=size;
            front=0;
            rear=0;
            arr=new int[size];
        }
        bool isEmpty(){
            if (front==rear)
            {
                front=0;
                rear=0;
                return true;
            }
            else{
                return false;
            }
            
        }
        void enqueue(int data){
                if (rear<size)
                {
                    arr[rear]=data;
                    rear++;
                }
                else{
                    cout<<"Queue is full";
                }
                
        }
        void dequeue(){
                if (isEmpty())
                {
                    cout<<"Stack is Empty";
                   
                }
                else{
                    
                    front++;
                    
                }
                
        }
        int frontEle(){
            if (isEmpty())
            {
                return -1;
            }
            else{
                return arr[front];
            }
            
        }
        void print(){
            while (!isEmpty())
            {
                cout<<frontEle()<<" ";
                dequeue();

            }
            
        }


};

int main()
{
    Queue q(10);
    q.enqueue(11);
    q.enqueue(12);
    q.enqueue(16);
    // q.dequeue();
    // cout<<q.frontEle();
    // q.print();
   
    
    
return 0;
}