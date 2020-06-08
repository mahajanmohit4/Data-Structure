#include<iostream>

using namespace std;

int s[5];
 int b;
int static counter=0;

void push(int );

void pop();

int show();


int main()
{


    show();

return 0;
}
int show()
{
    int a;
    cout<<"1 Push the element : "<<endl;
    cout<<"2 Pop the element : "<<endl;
    cout<<"3 Exit :"<<endl;
    cout<<"------Enter the option :------- ";
     cin>>a;


    switch(a)
    {
    case 1:
        {
            if(counter==4)
            {
                cout<<"Stack is full ";
                break;
            }

            cout<<"Enter the push element : "<<endl;
            cin>>b;
            push(b);
            show();
            break;
        }
    case 2:
        {
            if(counter==0)
            {
                cout<<"Stack is empty ";
                break;
            }
            pop();
            show();
            break;

        }
    case 3:
        {
           return 0;
        }
    }

}

void push(int i)
{
    s[counter]=i;
    cout<<s[counter];
    counter++;

}
void pop()
{
    counter--;
}
