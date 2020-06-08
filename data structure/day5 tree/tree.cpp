#include<iostream>
#include<stdlib.h>

using namespace std;

struct node
{
    int data;
    struct node *right;
    struct node *left;

};

int main()
{

    node n;
    n.data=10;
    n.right=NULL;
    n.left=NULL;

    node n1;

    n1.data=8;
    n1.right=NULL;
    n1.left=NULL;

    n.left=&n1;

    node n2;
    n2.data=15;
    n2.right=NULL;
    n2.left=NULL;

    n.right=&n2;

    node n3;
    n3.data=7;
    n3.right=NULL;
    n3.left=NULL;

    n1.left=&n3;

    node n4;
    n4.data=20;
    n4.right=NULL;
    n4.left=NULL;

    n2.right=&n4;


   cout<<n.data<<endl;
  //; cout<<n1.data<<endl;
   cout<<n.right->data<<endl;
   cout<<n.left->data<<endl;
   cout<<n.right->right->data<<endl;
   cout<<n.left->left->data<<endl;
       return 0;
}


