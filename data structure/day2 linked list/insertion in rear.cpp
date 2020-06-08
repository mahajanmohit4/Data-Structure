#include<iostream>
#include<stdlib.h>

using namespace std;

struct node
{
    int data;
    struct node *next;

};
int main()
{
    node d;

    d.data=10;
    d.next=NULL;

    node d1;

    d1.data=20;
    d1.next=NULL;

    node d2;
    d2.data=30;
    d2.next=NULL;

    d1.next=&d;
    d2.next=&d1;
    d2.next=NULL;

    cout<<d.data<<endl;
    cout<<d1.data<<endl;
    cout<<d2.data;

    return 0;

}
