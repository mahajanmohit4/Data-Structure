#include<iostream>
using namespace std;

int arr[10];
static int top = -1;
void push(int data)
{
    if(top == 9)
    {
        cout<<"Stack is full "<<endl;
        return;
    }
    arr[++top] = data;

}

void pop()
{
    if(top < 0 )
    {
        cout<<"Stack is empty "<<endl;
    }
    cout<<"Popped : "<<  arr[--top] <<endl;
}

void show()
{
    for(int i=0 ; i<=top ; i++)
    {
        cout<<arr[i]<<endl;
    }
}

int main()
{
    push(11);
    push(22);
    push(33);
    show();

    cout<<"------------"<<endl;
    pop();
    pop();
    
    cout<<"------------"<<endl; 
    show();
    return 0;
}