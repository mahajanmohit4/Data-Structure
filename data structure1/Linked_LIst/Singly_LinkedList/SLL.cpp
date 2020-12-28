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
    Node* newNode = new Node();

    newNode->data = newData;

    newNode->next = (*headRef);

    (*headRef) = newNode;
}

void printList(Node* n)
{
    while (n != NULL)
    {
        cout<<n->data<<endl;
        n = n->next;
    }
    
}

void deleteNode(Node** head_ref, int key) 
{	
	Node* temp = *head_ref; 
	Node* prev = NULL; 
	
	if (temp != NULL && temp->data == key) 
    { 
        *head_ref = temp->next;  
        delete temp;            
        return; 
    } 
	
	while (temp != NULL && temp->data != key) 
	{ 
		prev = temp; 
		temp = temp->next; 
	} 
	
	if (temp == NULL) 
		return; 
	
	prev->next = temp->next; 	
	delete temp; 
} 

void findSecondHighest(Node *head)
{
    cout << "Enterd in function" << endl;
    int First, Second = 0;

    Node *temp;
    temp = head;
    First = temp->data;

    while (temp != NULL)
    {       
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
	Node* head = NULL; 

	
	push(&head, 7); 
	push(&head, 1); 
	push(&head, 3); 
	push(&head, 2); 

	puts("Created Linked List: "); 
	printList(head); 

	deleteNode(&head, 1); 

	cout<<"======================"<<endl;	
	printList(head); 

    findSecondHighest(head);



    return 0;
}












// int main1(){

//     Node* head = NULL;
//     Node* second = NULL;
//     Node* third = NULL;

//     // Memory Allocate 
//     head = new Node();
//     second = new Node();
//     third = new Node();

//     head->data = 1;
//     head->next = second;

//     second->data = 2;
//     second->next = third ;

//     third->data = 3;
//     third->next = NULL;

//     printList(head);
  
// }


