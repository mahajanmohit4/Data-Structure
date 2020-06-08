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

cout<<"right : "<<p->right->data<<endl;
}

void left_shift(struct node *a,struct node *b)
{
    a->left=b;
    cout<<"left : "<<a->left->data<<endl;
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

   // n->left=n1;

  struct node *n2=(struct node * )malloc(sizeof (struct node));
    n2->data=15;
    n2->right=NULL;
    n2->left=NULL;

  //  n->right=n2;

  struct node *n3=(struct node * )malloc(sizeof (struct node));
    n3->data=7;
    n3->right=NULL;
    n3->left=NULL;

  //  n1->left=n3;


cout<<"Root node : "<<n->data<<endl;

    if( n->data < n1->data )
    {
        right_shift(n,n1);
      //  right_shift(n,n2);
    }
    else
    {
        left_shift(n,n1);
       // left_shift(n,n2);
    }

    if( n->data < n2->data )
    {
          right_shift(n,n2);
    }
    else
    {
      //  left_shift(n,n1);
      left_shift(n,n2);
    }

     if( n->data < n3->data )
    {
          right_shift(n,n3);
    }
    else
    {
      //  left_shift(n,n1);
      left_shift(n,n3);
    }



       return 0;
}

 // cout<<"right : "<<n->right->data<<endl;
    //cout<<"left : "<<n->left->data<<endl;
/*   cout<<n->data<<endl;

   cout<<n->right->data<<endl;
   cout<<n->left->data<<endl;
   cout<<n->right->right->data<<endl;
   cout<<n->left->left->data<<endl;
  */
