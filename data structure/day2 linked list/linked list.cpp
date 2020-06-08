#include<iostream>

using namespace std;

struct node
{
    int data;
    struct node *next;
};
int main()
{
        struct node d;

        d.data=20;
        d.next=NULL;

        struct node d1;

        d1.data=30;
        d1.next=NULL;

        d1.next=&d;

        struct node d2;

        d2.data=40;
        d2.next=NULL;

        d2.next=&d1;


        cout<<d.data<<endl;
        cout<<d1.data<<endl;
        cout<<d2.data;

    return 0;
}
