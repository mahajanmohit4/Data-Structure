#include<iostream>
#include<stdlib.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

int main()
{

       struct node *d=(struct node *)malloc(sizeof(struct node));

       d->data=10;
       d->next=NULL;



       struct node *d1=(struct node *)malloc(sizeof(struct node));

    d1->data=20;
    d1->next=NULL;
    d->next=d1;
struct node *temp= d;

   while(temp!=NULL)
   {
       cout<<temp->data<<endl;
       cout<<temp->next<<endl;
       temp=temp->next;
   }


    return 0;
}
