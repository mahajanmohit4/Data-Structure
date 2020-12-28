#include<iostream>
using namespace std;
#define size 10
int arr1[size];
int arr2[size];
static int top1 = -1;
static int top2 = -1;


bool isEmpty1()
{    
    return (top1 < 0 );
}

int top11()
{
    if (top1 < 0) {
        cout << "Stack is Empty";
        return 0;
    }
    else {
        int x = arr1[top1];
        return x;
    }
}
void push1(int data)
{
    if(top1 == 9)
    {
        cout<<"Stack is full "<<endl;
        return;
    }
    arr1[++top1] = data;

}

void pop1()
{
  //  if(isEmpty1()) return;   
    --top1;
}
bool isEmpty2()
{
    if(top2 < 0 ) return true;
    return false;
}
int top22()
{
    if (top2 < 0) {
        cout << "Stack is Empty";
        return 0;
    }
    else {
        int x = arr2[top2];
        return x;
    }
}
void push2(int data)
{
    if(top2 == 9)
    {
        cout<<"Stack is full "<<endl;
        return;
    }
    arr2[++top2] = data;

}

void pop2()
{
    if(top2 < 0 )
    {
        cout<<"Stack is empty "<<endl;
    }
   // cout<<"Popped : "<<  arr2[--top2] <<endl;
   --top2;
}

void EnQueue(int value)
{
    while (!isEmpty1)
    {
        push2(top11());
        pop1();
    }
    push1(value);

    while (!isEmpty2)
    {
        push1(top22());
        pop2();
    }
    
    
}

void DeQueue()
{
    if(isEmpty1())
    {
        cout<<"Queue is Empty "<<endl;
        return;
    }
    pop1();
}
void ShowQueue()
{
    for(int i=0 ; i<=top1 ; i++)
    {
        cout<<arr1[i]<<endl;
    }
}
int main()
{
    EnQueue(11);
    EnQueue(22);
    EnQueue(33);
    EnQueue(44);
    ShowQueue();
    cout<<"================="<<endl;
    DeQueue();
    DeQueue();
    DeQueue();
     
    cout<<"================="<<endl;
    ShowQueue();
    return 0;
}