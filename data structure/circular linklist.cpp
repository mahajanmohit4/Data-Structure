#include<iostream>

using namespace std;

int qu[5],fron=-1,rear=-1,n=5;
int ch,a;
void push(int input)
{
    if(fron==0 && rear==4)
    {
        cout<<"queue is empty : "<<endl;
        return;
    }

     if (fron == -1) {
      fron = 0;
      rear = 0;
   } else {
      if (rear == 4)
      rear = 0;
      else
      rear = rear + 1;
   }
    qu[rear]=input;
}

void pop()
{
    if(fron==-1)
    {
        cout<<"Queue is empty : "<<endl;
        return;
    }

 cout<<"Deletd queue : "<<qu[fron]<<endl;
    if (fron == rear) {
      fron = -1;
      rear = -1;
   } else {
      if (fron == 4)
      fron = 0;
      else
      fron = fron + 1;
   }
}
void display()
{
    if(fron<=rear)
    {
        while(fron<=rear)
        {
            cout<<qu[fron]<<endl;
            fron++;
        }
    }
    else
    {
        while(fron<=4)
        {
            cout<<qu[fron]<<endl;
            fron++;
        }

     /*   fron=0;
        while)(fron<=rear)
        {
            cout<<qu[fron]<<endl;
            fron++;
        }*/

    }
    cout<<endl;


}

int main()
{
    while(1)
    {
        cout<<"\n 1     insert : "<<endl;
        cout<<"2        delete : "<<endl;
        cout<<"3        display : "<<endl;
        cout<<"4        exit : "<<endl;
        cout<<"Enter the choice : ";
        cin>>ch;

        switch(ch)
        {
        case 1:
            {
                cout<<"Enter the Element : ";
                cin>>a;
                push(a);
                break;
            }
        case 2:
            {
                pop();
                break;
            }
        case 3:
            {
                display();
                break;
            }
        case 4:
            {
               return 0;
            }
        }
    }


    return 0;
}
