// C++ program to print second largest 
// value in a linked list 
#include <climits> 
#include <iostream> 

using namespace std; 

// A linked list node 
struct Node { 
	int data; 
	struct Node* next; 
}; 

// Function to add a node at the 
// beginning of Linked List 
void push(struct Node** head_ref, int new_data) 
{ 
	/* allocate node */
	struct Node* new_node = (struct Node*)malloc(sizeof(struct Node)); 

	/* put in the data */
	new_node->data = new_data; 

	/* link the old list off the new node */
	new_node->next = (*head_ref); 

	/* move the head to point to the new node */
	(*head_ref) = new_node; 
} 

// Function to count size of list 
int listSize(struct Node* node) 
{ 
	int count = 0; 

	while (node != NULL) { 
		count++; 

		node = node->next; 
	} 

	return count; 
} 

// Function to print the second 
// largest element 
void print2largest(struct Node* head) 
{ 
	int i, first, second; 

	int list_size = listSize(head); 

	/* There should be atleast two elements */
	if (list_size < 2) { 
		cout << "Invalid Input"; 
		return; 
	} 

	first = second = INT_MIN; 

	struct Node* temp = head; 

	while (temp != NULL) { 
		if (temp->data > first) { 
			second = first; 
			first = temp->data; 
		} 

		// If current node's data is in between 
		// first and second then update second 
		else if (temp->data > second && temp->data != first) 
			second = temp->data; 

		temp = temp->next; 
	} 

	if (second == INT_MIN) 
		cout << "There is no second largest element\n"; 
	else
		cout << "The second largest element is " << second; 
} 

// Driver program to test above function 
int main() 
{ 
	struct Node* start = NULL; 

	/* The constructed linked list is: 
	12 -> 35 -> 1 -> 10 -> 34 -> 1 */
	push(&start, 1); 
	push(&start, 34); 
	push(&start, 10); 
	push(&start, 1); 
	push(&start, 35); 
	push(&start, 12); 

	print2largest(start); 

	return 0; 
} 
