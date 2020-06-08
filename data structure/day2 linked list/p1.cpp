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

    cout<<d->data<<endl;
    cout<<d->next<<endl;
    cout<<d->next->data<<endl;
    cout<<d1->next<<endl;


    return 0;
}
