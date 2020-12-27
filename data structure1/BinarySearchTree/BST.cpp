#include<iostream>

using namespace std;

class Node
{
    public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;

        left = NULL;
        right = NULL;
    }
};

Node* InsertNode(Node* root, int value)
{
    if(!root)
    {
        return new Node(value);
    }

    if(value > root->data)
    {
        root->right = InsertNode(root->right, value);
    }
    else
    {
        root->left = InsertNode(root->left, value);
    }
    
    return root;
}

void InOrder(Node *root)
{
    if(!root)
    {
        return;
    }

    InOrder(root->left);
    cout<< root->data <<endl;
    InOrder(root->right);
}

void PreOrder(Node *root)
{
    if(!root) return;

    cout<< root->data <<endl;
    PreOrder(root->left);
    PreOrder(root->right);
    
}

void PostOrder(Node *root)
{
    if(!root) return;

    PostOrder(root->left);
    PostOrder(root->right);
    cout<< root->data <<endl;
}
int main()
{
    Node *root = new Node(100);
    
    InsertNode(root,200);
    InsertNode(root,50);
    InsertNode(root,300);

    cout<<"InOrder : "<<endl;
    InOrder(root);

    cout<<"PreOrder : "<<endl;
    PreOrder(root);

    cout<<"PostOrder : "<<endl;
    PostOrder(root);

    return 0;
}

