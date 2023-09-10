#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data;
        temp = temp->next;
        cout << endl;
    }
    cout << endl;
}
void insertAtStart(Node *&head, int data)
{
    Node *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}
void insertAtEnd(Node *& head,int data){
    Node* newNode= new Node(data);
    Node* temp=head;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->next=NULL;
    
}
int main()
{
    Node *head = new Node(10);
    print(head);
    insertAtStart(head, 20);
    insertAtStart(head, 30);
    print(head);
    insertAtEnd(head,60);
    print(head);

    return 0;
}