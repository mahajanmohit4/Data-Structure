#include<iostream>

using namespace std;

class Node
{
    public:
    int data;
    Node *next;
    Node *prev;
};


void insert(Node **head , int data)
{
    if (*head == NULL) 
    { 
        Node* new_node = new Node; 
        new_node->data = data; 
        new_node->next = new_node->prev = new_node; 
        *head = new_node; 
        return; 
    } 

    Node *last = (*head)->prev;

    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = *head;
    
   

    newNode->prev = last;

   // last->next = (*head)->prev =  newNode;
    last->next = newNode;
    *head = newNode;

}

void show(Node *head)
{
    Node *temp = head;
    while (temp->next != head)
    {
        cout<<temp->data <<endl;
        temp = temp->next;
    }
    
    cout<<temp->data <<endl;
}

int main()
{
    Node *head = NULL;
    insert(&head , 11);
    insert(&head , 22);
    insert(&head , 11);
    insert(&head , 22);

    show(head);

    return 0;
}