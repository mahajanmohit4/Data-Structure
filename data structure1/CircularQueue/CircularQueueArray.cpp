#include<iostream>
using namespace std;

#define size 10
int front=-1, rear = -1 ;
int arr[size];

void EnQueue(int data)
{
    if((front == 0 && rear == size-1) || 
            (rear == (front-1)%(size-1)))
    {
        cout<<"Queue is full "<<endl;
        return;
    }
    else if(front == -1)
    {
        front = rear = 0;
        arr[rear] = data;
    }
    else if (rear == size-1 && front != 0) 
    { 
        rear = 0; 
        arr[rear] = data; 
    } 
    else
    { 
        rear++; 
        arr[rear] = data; 
    } 
}

void DeQueue()
{
    if(front == -1)
    {
        cout<<"Queue is empty "<<endl;
        return;
    }
    int data = arr[front]; 
    arr[front] = -1; 
    if (front == rear) 
    { 
        front = -1; 
        rear = -1; 
    } 
    else if (front == size-1) 
        front = 0; 
    else
        front++; 
}

void show()
{
    if(front == -1)
    {
        cout<<"Queue is empty "<<endl;
        return;
    }
    
    if (rear >= front) 
    { 
        for (int i = front; i <= rear; i++) 
             cout<<arr[i]<<endl;
    } 
    else
    { 
        for (int i = front; i < size; i++) 
             cout<<arr[i]<<endl; 
  
        for (int i = 0; i <= rear; i++) 
             cout<<arr[i]<<endl;
    } 
  
}

int main()
{
    EnQueue(11);
    EnQueue(22);
    EnQueue(33);
    EnQueue(44);
    EnQueue(44);
    EnQueue(44);
    

    show();
    cout<<"=================="<<endl;
    DeQueue();
    DeQueue();
   
    
    cout<<"=================="<<endl;
    show();

    return 0;
}