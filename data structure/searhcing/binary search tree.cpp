
#include<iostream>
#include<stdlib.h>
using namespace std;

struct node
{
    int data;
    struct node *right;
    struct node *left;
};
struct node *newnode(int input)
{
    struct node *temp = (struct node *)malloc (sizeof(struct node));
    temp->data=input;
    temp->right=NULL;
    temp->left=NULL;
};

struct node *insertnode(struct node *root, int x)
{
    if(root==NULL)
    {
        struct node *temp1=newnode(x);
        return temp1;
    }
    else if(x>root->data)
    {
        root->right=insertnode(root->right,x);
    }
    else{
        root->left=insertnode(root->left,x);
    }
    return root;
};

void travers(struct node *root)
{
    if(root!=NULL)
    {
        travers(root->left);
        cout<<root->data<<endl;
        travers(root->right);
    }
}

void search_element(struct node *root , int element)
{
    if(root!=NULL)
    {
        if(element == root->data)
        {
            cout<<"Element was found "<<root->data;
        }
       else if(element < root->data)
        {
           search_element(root->left,element);
        }
        else if(element > root->data)
        {
            search_element(root->right,element);
        }

    }
    else
        {
             cout<<"Element was not found ";
        }
}

int main()
{
    int a,re,n,m[10];

    cout<<"Enter the root :";
    cin>>re;

    cout<<"Enter how many node you want : ";
    cin>>n;

    struct node *r=newnode(re);

    for(int i=0;i<n;i++)
    {
       cin>>m[i];
        insertnode(r,m[i]);
    }
cout<<"sorted orderd : ";

    travers(r);

cout<<"Enter the search element :";
cin>>a;

    search_element(r,a);


    return 0;
}
