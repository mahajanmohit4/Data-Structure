#include<iostream>
#include<stdlib.h>

using namespace std;
struct node *newnode(int);
struct node *insertnode(struct node ,int);
struct node
{
    int data;
    struct node *right;
    struct node *left;

};

struct node *newnode(int input)
{
    struct node *temp=(struct node *)malloc(sizeof (struct node ));
    temp->data=input;
    temp->right=NULL;
    temp->left=NULL;

    return temp;

};

struct node *insertnode(struct node *root,int x)
{
     if(root==NULL)
     {
        struct node *temp1=newnode(x);
        return temp1;


     }
     else if(x > root->data)
    {

       root->right=insertnode(root->right,x);
    }
     else
    {
      root->left=insertnode(root->left,x);

    }

     return root;
}

void trav( struct node *root)
{

    if(root!=NULL)
    {
        trav(root->left);
         cout<<endl<<root->data<<endl;
        trav(root->right);

    }


}

int main()
{

    struct node *r= newnode(100);

    insertnode(r,10);
    insertnode(r,20);
    insertnode(r,110);
    insertnode(r,50);
    insertnode(r,60);





    trav(r);


       return 0;
}

