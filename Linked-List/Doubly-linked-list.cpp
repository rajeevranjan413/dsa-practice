#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;


    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};
void insertAtStart(Node* &head,int data){
    Node* newNode=new Node(data);
    newNode->next=head;
    head->prev=newNode;
    newNode->prev=NULL;
    head=newNode;
    
}
void print(Node* &head){
    Node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data;
        temp=temp->next;
        cout<<endl;
    }
    
}
int main()
{
    Node* head=new Node(11);
    insertAtStart(head,7);
    print(head);


    
return 0;
}