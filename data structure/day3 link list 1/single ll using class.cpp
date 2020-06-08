#include<iostream>
#include<stdlib.h>

using namespace std;

class node
{
    int data;
    node *next;

public:

void setnext(node *temp)
{
    next=temp;
}
void setdata(int input)
{
    data=input;
}
int getdata()
{
    return data;
}

node *getnext()
{
    return next;
}
};


int main()
{

    node *first=new node();

    first->setdata(10);
  

    node *second =new node();

    second->setdata(20);
  

first->setnext(second);
    node *temp;

    for(temp=first;temp->getdata()!=NULL;temp=temp->getnext())
    {
        cout<<temp->getdata()<<endl;
    }

    return 0;

}
