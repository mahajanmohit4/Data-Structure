#include<iostream>
using namespace std;

class Node{
    public :
    int data;
    Node *next;

};

void asd(Node* n)
{
    
    while(n != NULL)
    {
        cout<<n->data<<endl;
        n = n->next;
    }
}
void printList(Node* n){
    while (n != NULL)
    {
        cout<<n->data<<endl;
        n = n->next;
    }
    
}

int main()
{

    Node *head = NULL;
    Node *second =NULL;
    Node *third = NULL;
    Node *forth = new Node();

    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 11;
    head->next = second;

    second->data = 22;
    second->next = third;

    third->data = 33;
    third->next = NULL;

    printList(head);
    cout<<"Hello world";

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


