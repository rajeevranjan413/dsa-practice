#include <iostream>
using namespace std;
class Node
{
    int data;
    Node *next;
    Node *prev;

public:
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
    void insertAtStart(Node *&head, int data)
    {
        Node *newNode = new Node(data);
        newNode->next = head;
        head->prev = newNode;
        newNode->prev = NULL;
        head = newNode;
    }
    void print(Node *&head)
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data;
            temp = temp->next;
            cout << endl;
        }
    }
    void reverse(Node *&head)
    {
        Node *prev2 = NULL;
        Node *curr = head;
        Node *fow;
        while (curr != NULL)
        {
            fow = curr->next;
            curr->next = prev2;
            curr->prev = fow;
            prev2 = curr;
            curr = fow;
        }
        head = prev2;
    }
};

int main()
{
    Node *head = new Node(11);
    head->insertAtStart(head, 7);
    head->insertAtStart(head, 9);
    head->insertAtStart(head, 10);
    head->insertAtStart(head, 11);
    head->insertAtStart(head, 13);
    head->print(head);
    head->reverse(head);
    head->print(head);

    return 0;
}