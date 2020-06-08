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

    int a,c;
    int b[10];
    cout<<"Enter how many number you want ";
    cin>>c;

    cout<<"Enter root : ";
    cin>>a;

    struct node *r= newnode(a);

    for(int i=0;i<c;i++)
    {
        cout<<"Enter the values : ";
        cin>>b[i];
    }
    cout<<endl;

    for(int i=0;i<c;i++)
    {
        insertnode(r,b[i]);
    }

       trav(r);


       return 0;
}

