#include<iostream>
#include<stdlib.h>

using namespace std;

struct node
{
    int data;
    struct node *right;
    struct node *left;

};

void right_shift(struct node *p,struct node *q)
{
    p->right=q;


}

void left_shift(struct node *a,struct node *b)
{
    a->left=b;
  //
}

int main()
{

  struct node *n=(struct node * )malloc(sizeof (struct node));
    n->data=10;
    n->right=NULL;
    n->left=NULL;



  struct node *n1=(struct node * )malloc(sizeof (struct node));
    n1->data=8;
    n1->right=NULL;
    n1->left=NULL;



  struct node *n2=(struct node * )malloc(sizeof (struct node));
    n2->data=15;
    n2->right=NULL;
    n2->left=NULL;



  struct node *n3=(struct node * )malloc(sizeof (struct node));
    n3->data=17;
    n3->right=NULL;
    n3->left=NULL;



 if( n->data < n1->data )
    {
        right_shift(n,n1);
    }
    else
    {
        left_shift(n,n1);
    }

    if( n->data < n2->data )
    {
          right_shift(n,n2);
    }
    else
    {

      left_shift(n,n2);
    }

     if( n->data < n3->data )
    {
          right_shift(n,n3);
    }
    else
    {

      left_shift(n,n3);
    }
   struct node *temp = n;
struct node *tem = n;

   while(temp!=NULL)
   {

       cout<<"right :"<<temp->data<<endl;

           temp=temp->right;
   }
    while (tem != NULL)
    {

       cout<<"left : "<<tem->data<<endl;
        tem=tem->left;
    }
       return 0;
}
