#include<iostream>
#include<stdlib.h>

using namespace std;
class node
{
public:

    int data;
    node *next;
    node *pvr;

};
node *firstnode(int input)
{
    node *n=new node();
    n->data=input;
    n->next=NULL;
    n->pvr=NULL;
    return n;
}
node *createnode(int input)
{
    node *n1=new node();
    n1->data=input;
    n1->next=NULL;
    n1->pvr=NULL;
    return n1;
}
void connection(node *p1,node *p2)
{
    p1->next=p2;
    p2->pvr=p1;

}
void display(node *temp=NULL)
{

   for(temp=n; temp->next!=NULL ;temp=temp->next);

    for(temp ; temp!=NULL ;temp=temp->pvr)
    {
        cout<<temp->data;

    }
}

int main()
{
    node *d=firstnode(10);
    node *d1=createnode(20);
    node *d2=createnode(30);

    connection(d,d1);
    connection(d1,d2);

    display(d);

    return 0;
}
