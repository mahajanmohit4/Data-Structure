#include<iostream>
#include<stdlib.h>

using namespace std;

class demo
{
    public:
    int data;
    struct demo *next;

};

 demo *firstnode(int input)
{
    struct demo *node=(struct demo *)malloc(sizeof(struct demo));
    node->data=input;
    node->next=NULL;

    return node;
};

 demo *createdemo(int input)
{
    struct demo *n=(struct demo *)malloc(sizeof(struct demo));
    n->data=input;
    n->next=NULL;

    return n;
};

void connection(struct demo *n1,struct demo *n2)
{
    n1->next=n2;

}
void traverse(struct demo *temp)
{
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        cout<<temp->next<<endl;
        temp=temp->next;
    }
}

int main()
{
     demo *d=firstnode(110);
     demo *d1=createdemo(20);
     demo *d2=createdemo(30);

    connection(d,d1);
    connection(d1,d2);

    traverse(d);




return 0;
}


