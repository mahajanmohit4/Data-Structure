#include<iostream>
#include<stdlib.h>

using namespace std;

struct node
{
    int data;
    struct node *next;
    struct node *prv;

};

int main()
{
    struct node *n=(struct node *)malloc(sizeof(struct node));

    n->data=10;
    n->next=NULL;
    n->prv=NULL;

    struct node *n1=(struct node *)malloc(sizeof (struct node));
    n1->data=20;
    n1->next=NULL;
    n1->prv=NULL;

    struct node *n2=(struct node *)malloc(sizeof (struct node));
    n2->data=30;
    n2->next=NULL;
    n2->prv=NULL;


    n->next=n1;
    n1->next=n2;

     n1->prv=n;
    n2->prv=n1;


    struct node* temp= NULL;

     for(temp=n ; temp->next!=NULL ; temp=temp->next);

     for(temp; temp!=NULL ;  temp=temp->prv)
    {
         cout<<temp->prv<<endl;
         cout<<temp->data<<endl;
         cout<<temp->next<<endl;


     }

  /*
  struct node *temp= n;

     //for(temp=n;temp!=NULL;temp->next){};

     for(temp=n->next->next; temp!=n ;temp=temp->prv)
     {
         cout<<temp->data;
     }
*/
       return 0;
}


