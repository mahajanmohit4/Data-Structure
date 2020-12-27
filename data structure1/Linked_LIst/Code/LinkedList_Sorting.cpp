#include<iostream>

using namespace std;

class Node
{
    public:
    int data;
    Node* next;

};
Node* swap(Node* ptr1,  Node* ptr2) 
{ 
    Node* tmp = ptr2->next; 
    ptr2->next = ptr1; 
    ptr1->next = tmp; 
    return ptr2; 
} 
int count = 0;
void printList(Node* n)
{
    while (n != NULL)
    {
        ++count;
        cout<<n->data << endl;
        n = n->next;
    }
    
}

/* Function to sort the list */
void bubbleSort(Node** head, int count) 
{ 
    Node** h; 
    int i, j, swapped; 
  
    for (i = 0; i <= count; i++) 
    { 
  
        h = head; 
        swapped = 0; 
  
        for (j = 0; j < count - i - 1; j++)  
        { 
  
             Node* p1 = *h; 
             Node* p2 = p1->next; 
  
            if (p1->data < p2->data) 
            { 
  
                /* update the link after swapping */
                *h = swap(p1, p2); 
                swapped = 1; 
            } 
  
            h = &(*h)->next; 
        } 
  
        /* break if the loop ended without any swap */
        if (swapped == 0) 
            break; 
    } 
} 
  
int highest;
int secondHighest;
void SecondHighest(Node *head)
{
    // Node *temp = head;
    // cout<<"=================="<<endl;
    // while (temp != NULL)
    // {
    //     cout<<temp->data <<endl; 
    //     highest = temp->data;      
    //     temp = temp->next;
    // }
    
    // Node *temp1 = head;
    // cout<<"=================="<<endl;
    // while (temp1->data != highest)
    // {
    //     secondHighest = temp1->data;
    //     temp1 = temp1->next;
    // }

   highest = head->data;
   secondHighest = head->next->data;
}


void append(Node** head_ref, int new_data) 
{ 

	Node* new_node = new Node(); 

	Node *last = *head_ref; 

	new_node->data = new_data; 

	new_node->next = NULL; 

	if (*head_ref == NULL) 
	{ 
		*head_ref = new_node; 
		return; 
	} 

	while (last->next != NULL) 
		last = last->next; 

	last->next = new_node; 
	return; 
} 




int main(){

    Node* head = NULL;

    append(&head, 77);
    append(&head, 55);
    append(&head, 99);
    append(&head, 66);

    append(&head, 11);

    append(&head, 22);

   
    printList(head);
    bubbleSort(&head,count);

    cout<<"=================="<<endl;
    //printList(head);

    SecondHighest(head);
    cout<<"=================="<<endl;
    cout<<"Highest : "<<highest<<endl;
    cout<<"Second Highest : "<<secondHighest<<endl;
    return 0;
}