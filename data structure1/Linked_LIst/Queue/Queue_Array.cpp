#include<iostream>

using namespace std;

int front=0,rear=0;
int arr[10];

void EnQueue(int data)
{
    if(rear == 10)
    {
        cout<<"Queue is full "<<endl;
        return;
    }
    arr[rear] = data;
    rear++;
}

void DeQueue()
{
    if(front == rear)
    {
        cout<<"Queue is empty "<<endl;
        return;
    }
     cout<<arr[front]<<endl;
    for(int i=0 ;i<rear-1 ;i++)
        arr[i] = arr[i+1];
    
    
    rear--;
}

void show()
{
    for(int i =front ;i<rear ;i++)
    {
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
    EnQueue(44);
    EnQueue(44);
    EnQueue(44);
    EnQueue(44);
    EnQueue(44);
    EnQueue(44);

    show();
    cout<<"=================="<<endl;
    DeQueue();
    DeQueue();
     DeQueue();
      DeQueue();
       DeQueue();
        DeQueue();
         DeQueue();
          DeQueue();
           DeQueue();
            DeQueue();
             DeQueue();

    cout<<"=================="<<endl;
    show();

    return 0;
}