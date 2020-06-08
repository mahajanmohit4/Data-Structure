#include<iostream>

#include<stdlib.h>

using namespace std;

class node
{
    int data;
    node *right;
    node *left;
public:

    void setdata(int input)
    {
        data=input;
    }

    int getdata()
    {
        return data;
    }

    void setright(node *temp)
    {
        right=temp;
    }

    void setleft(node *tem)
    {
        left=tem;
    }

    node *getright()
    {
        return right;
    }
    node *getleft()
    {
        return left;
    }
};

int main()
{
    node *n=new node();

    n->setdata(10);

    node *n1=new node();

    n1->setdata(20);

    n->getright(n1);

    node *n2=new node();

    n2->setdata(30);

    n->getleft(n2);




    return 0;

}
