#include<iostream>
#include<stdlib.h>

using namespace std;

int in[20];
int pre[20];
int p=-1;
int q=-1;

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

void preorder( struct node *root)
{

    if(root!=NULL)
    {
        cout<<endl<<root->data<<endl;

        pre[++q]=root->data;
        preorder(root->left);

        preorder(root->right);

    }


}


 int i=0;
void inorder( struct node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        cout<<endl<<root->data<<endl;
        in[++p]=root->data;
        inorder(root->right);

    }


}
int main()
{

    int a,c;
    int b[10];
    cout<<"Enter how many Element you want : ";
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

    cout<<" Preorder "<<endl;
     preorder(r);

    cout<<"\n Inorder "<<endl;
     inorder(r);

        for(int i=0;i<c+1;i++)
        {
           if(in[i]==pre[i])
           {
               cout<<"Same element : "<<in[i]<<endl;
           }

        }



       return 0;
}

#include<iostream>
#include<stdlib.h>

using namespace std;

int in[20];
int pre[20];
int p=-1;
int q=-1;

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

void preorder( struct node *root)
{

    if(root!=NULL)
    {
        cout<<endl<<root->data<<endl;

        pre[++q]=root->data;
        preorder(root->left);

        preorder(root->right);

    }


}


 int i=0;
void inorder( struct node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        cout<<endl<<root->data<<endl;
        in[++p]=root->data;
        inorder(root->right);

    }


}
int main()
{

    int a,c;
    int b[10];
    cout<<"Enter how many Element you want : ";
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

    cout<<" Preorder "<<endl;
     preorder(r);

    cout<<"\n Inorder "<<endl;
     inorder(r);

        for(int i=0;i<c+1;i++)
        {
           if(in[i]==pre[i])
           {
               cout<<"Same element : "<<in[i]<<endl;
           }

        }



       return 0;
}

#include<iostream>
#include<stdlib.h>

using namespace std;

int in[20];
int pre[20];
int p=-1;
int q=-1;

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

void preorder( struct node *root)
{

    if(root!=NULL)
    {
        cout<<endl<<root->data<<endl;

        pre[++q]=root->data;
        preorder(root->left);

        preorder(root->right);

    }


}


 int i=0;
void inorder( struct node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        cout<<endl<<root->data<<endl;
        in[++p]=root->data;
        inorder(root->right);

    }


}
int main()
{

    int a,c;
    int b[10];
    cout<<"Enter how many Element you want : ";
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

    cout<<" Preorder "<<endl;
     preorder(r);

    cout<<"\n Inorder "<<endl;
     inorder(r);

        for(int i=0;i<c+1;i++)
        {
           if(in[i]==pre[i])
           {
               cout<<"Same element : "<<in[i]<<endl;
           }

        }



       return 0;
}

#include<iostream>
#include<stdlib.h>

using namespace std;

int in[20];
int pre[20];
int p=-1;
int q=-1;

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

void preorder( struct node *root)
{

    if(root!=NULL)
    {
        cout<<endl<<root->data<<endl;

        pre[++q]=root->data;
        preorder(root->left);

        preorder(root->right);

    }


}


 int i=0;
void inorder( struct node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        cout<<endl<<root->data<<endl;
        in[++p]=root->data;
        inorder(root->right);

    }


}
int main()
{

    int a,c;
    int b[10];
    cout<<"Enter how many Element you want : ";
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

    cout<<" Preorder "<<endl;
     preorder(r);

    cout<<"\n Inorder "<<endl;
     inorder(r);

        for(int i=0;i<c+1;i++)
        {
           if(in[i]==pre[i])
           {
               cout<<"Same element : "<<in[i]<<endl;
           }

        }



       return 0;
}

#include<iostream>
#include<stdlib.h>

using namespace std;

int in[20];
int pre[20];
int p=-1;
int q=-1;

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

void preorder( struct node *root)
{

    if(root!=NULL)
    {
        cout<<endl<<root->data<<endl;

        pre[++q]=root->data;
        preorder(root->left);

        preorder(root->right);

    }


}


 int i=0;
void inorder( struct node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        cout<<endl<<root->data<<endl;
        in[++p]=root->data;
        inorder(root->right);

    }


}
int main()
{

    int a,c;
    int b[10];
    cout<<"Enter how many Element you want : ";
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

    cout<<" Preorder "<<endl;
     preorder(r);

    cout<<"\n Inorder "<<endl;
     inorder(r);

        for(int i=0;i<c+1;i++)
        {
           if(in[i]==pre[i])
           {
               cout<<"Same element : "<<in[i]<<endl;
           }

        }



       return 0;
}

