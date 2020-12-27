#include<iostream>

using namespace std;

class Node
{
    public:
    int data;
    Node* next;

};

void push(Node** headRef , int newData)
{
     /* 1. allocate node */
    Node* newNode = new Node();

    /* 2. put in the data */
    newNode->data = newData;

    /* 3. Make next of new node as head */
    newNode->next = (*headRef);

    /* 4. move the head to point to the new node */
    (*headRef) = newNode;

}



void insertAfter(Node *prevNode, int newData)
{
    /*1. check if the given prev_node is NULL */
    if (prevNode == NULL)  
    {  
        cout<<"the given previous node cannot be NULL";  
        return;  
    } 

    /* 2. allocate new node */
    Node* newNode = new Node();

    /* 3. put in the data */
    newNode->data = newData;

    /* 4. Make next of new node as next of prev_node */
    newNode->next = prevNode->next;

    /* 5. move the next of prev_node as new_node */
    prevNode->next = newNode;
}

void printList(Node* n)
{
    while (n != NULL)
    {
        cout<<n->data << endl;
        n = n->next;
    }
    
}


// Given a reference (pointer to pointer) to the head 
// of a list and an int, appends a new node at the end 
void append(Node** head_ref, int new_data) 
{ 
	
	// 1. allocate node 
	Node* new_node = new Node(); 
	
	// Used in step 5 
	Node *last = *head_ref; 
	
	// 2. Put in the data 
	new_node->data = new_data; 
	
	// 3. This new node is going to be 
	// the last node, so make next of 
	// it as NULL 
	new_node->next = NULL; 
	
	// 4. If the Linked List is empty, 
	// then make the new node as head 
	if (*head_ref == NULL) 
	{ 
		*head_ref = new_node; 
		return; 
	} 
	
	// 5. Else traverse till the last node 
	while (last->next != NULL) 
		last = last->next; 
	
	// 6. Change the next of last node 
	last->next = new_node; 
	return; 
} 




int main(){

    Node* head = NULL;

    push(&head, 11);
    push(&head, 22);
    push(&head, 33);

    insertAfter(head, 44);
    insertAfter(head, 55);
    insertAfter(head, 66);

    append(&head, 77);
    append(&head, 88);
    append(&head, 99);

    cout<<"Hello ";
    printList(head);

   
    return 0;
}