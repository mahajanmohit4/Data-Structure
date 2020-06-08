#include<iostream>
#include<stdlib.h>

using namespace std;

struct node
{
    int data;
    struct node *right;
    struct node *left;

};


void trav(node *root)
{
   // cout<<"trav  "<<endl;

    if(root!=NULL)
    {
        trav(root->left);
         cout<<root->data<<endl;
        trav(root->right);

    }


}

int main()
{

  struct node *n=(struct node * )malloc(sizeof (struct node));
    n->data=100;
    n->right=NULL;
    n->left=NULL;

  struct node *n1=(struct node * )malloc(sizeof (struct node));
    n1->data=90;
    n1->right=NULL;
    n1->left=NULL;

    n->left=n1;

  struct node *n2=(struct node * )malloc(sizeof (struct node));
    n2->data=180;
    n2->right=NULL;
    n2->left=NULL;

    n->right=n2;

  struct node *n3=(struct node * )malloc(sizeof (struct node));
    n3->data=95;
    n3->right=NULL;
    n3->left=NULL;

    n1->left=n3;


    struct node *n4=(struct node * )malloc(sizeof (struct node));
    n4->data=98;
    n4->right=NULL;
    n4->left=NULL;

    n3->right=n4;

    struct node *n5=(struct node * )malloc(sizeof (struct node));
    n5->data=160;
    n5->right=NULL;
    n5->left=NULL;

    n2->left=n5;

    struct node *n6=(struct node * )malloc(sizeof (struct node));
    n6->data=750;
    n6->right=NULL;
    n6->left=NULL;

    n2->right=n6;

    trav(n);


       return 0;
}

