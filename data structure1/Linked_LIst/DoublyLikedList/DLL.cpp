#include<iostream>
using namespace std;

class Node
{
    public :
    int data;
    Node *next;
    Node *prev;
};

//Insertion at Front
void push(Node **headRef , int newData)
{

    Node *newNode = new Node();



    newNode->data = newData;


    newNode->next = (*headRef);
    newNode->prev = NULL;

    if((*headRef)!=NULL){
        (*headRef)->prev = newNode;
    }

    (*headRef) = newNode;
}

void printList(Node *n)
{
    Node* last;
    while ( n != NULL)
    {
        cout<<n->data <<endl;
        last = n;
        n = n->next;
    }
    cout<<endl<<"---------------------"<<endl;

    while (last != NULL)
    {
        cout<<last->data<<endl;
        last = last->prev;
    }
    
    
}

int main()
{
    Node *head = NULL;
    
    push(&head,11);
    push(&head,22);
    push(&head,33);
    

    printList(head);
    return 0;
}