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
void print(Node * head)
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
void reverseList(Node * &head){
    Node* prev=NULL;
    Node* curr=head;
    Node* forw;
    while (curr!=NULL)
    {
        forw=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forw;
    }
    head=prev;
    
}
int main()
{
    Node *head = new Node(10);

    insertAtStart(head, 20);
    insertAtStart(head, 30);
    insertAtStart(head,40);
    insertAtStart(head,80);
    insertAtStart(head,70);
    print(head);
    reverseList(head);
    print(head);
    
    return 0;
}