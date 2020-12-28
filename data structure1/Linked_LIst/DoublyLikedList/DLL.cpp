#include<iostream>
using namespace std;

class Node
{
    public :
    int data;
    Node *next;
    Node *prev;
};


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
    cout<<endl<<"---------Reverse------------"<<endl;

    while (last != NULL)
    {
        cout<<last->data<<endl;
        last = last->prev;
    }
    
    
}


void deleteNode(Node** head_ref, Node* del) 
{ 
    
    if (*head_ref == NULL || del == NULL) 
        return;  
    
    if (*head_ref == del) 
        *head_ref = del->next; 
 
    
    if (del->next != NULL) 
        del->next->prev = del->prev;  
    
    if (del->prev != NULL) 
        del->prev->next = del->next;  
    
    free(del); 
    return; 
} 

void findSecondHighest(Node *head)
{
    cout << "Enterd in function" << endl;
    int First, Second = 0;

    Node *temp;
    temp = head;
    First = temp->data;

    //cout << "first" << First << endl;
    while (temp != NULL)
    {
        // cout << "test1" << endl;

        if (temp->data > First)
        {

            Second = First;
            First = temp->data;
        }
        else if (Second < temp->data && temp->data < First)
        {
            Second = temp->data;
        }
        temp = temp->next;
    }

    cout << "first Highest :- " << First << endl;
    cout << "Second Highest :- " << Second << endl;
}


int main()
{
    Node *head = NULL;
    
    push(&head,11);
    push(&head,22);
    push(&head,33);
    

    printList(head);

  
    findSecondHighest(head);

    deleteNode(&head, head);

    cout<<"=========================="<<endl;
    printList(head);
    return 0;
}