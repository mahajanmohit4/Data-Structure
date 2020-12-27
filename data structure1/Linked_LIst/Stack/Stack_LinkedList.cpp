#include<iostream>

using namespace std;

class Node
{
    public:
    int data;
    Node *link;
    
};

Node *top;

void push(int data)
{
    Node *temp;
    temp = new Node();

    if(!temp)
    {
        cout<<"Heap overflow "<<endl;
    }
    temp->data = data;
    
    temp->link = top;

    top = temp;
}

void pop()
{
    Node *temp;
    if(top == NULL)
    {
        cout<<"Stack is empty "<<endl;
        return;
    }
    temp = top;

    top = top->link;
    temp->link = NULL;

    free(temp);
}

void show()
{
    Node *temp;

    temp = top;
    while (temp != NULL)
    {
        cout<<temp->data <<endl;
        temp = temp->link;
    }
    
}

int main()
{
    push(11);
    push(22);
    push(33);
    show();
    cout<<"=================="<<endl;
    pop();
    pop();
    show();
    
    return 0;
}