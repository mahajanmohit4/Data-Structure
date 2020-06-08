#include<iostream>

#include<stdlib.h>

using namespace std;

class node
{
public:

    int data;
    node *next;
};

int main()
{
    node *n=new node();

    n->data=10;
    n->next=NULL;

    node *n1=new node();

    n1->data=20;
    n1->next=NULL;

    n->next=n1;
    cout<<n->data<<endl;
    cout<<n1->data;

    return 0;
}
