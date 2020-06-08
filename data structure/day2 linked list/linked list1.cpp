#include<iostream>

using namespace std;

struct node
{
    int data;
    struct node *next;
};
int main()
{
         node d;

        d.data=20;
        d.next=NULL;

         node d1;

        d1.data=30;
        d1.next=NULL;

        d.next=&d1;


      cout<<d.data<<endl;
      cout<<d.next<<endl;
      cout<<d.next->data<<endl;
     cout<<d.next->next->data;


    return 0;
}
