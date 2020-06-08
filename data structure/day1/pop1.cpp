#include <iostream>

using namespace std;

int s[3]={11,22,33};
int counter=3;

int isempty()
{
    if(counter==0)
    {
        cout<<"stack is empty ";
        return 0;

    }
        return 1;
}
void pop()
{
    int res=isempty();
    if(res==1)
    {
         counter--;
    }

}

int main()
{
    pop();
    pop();
    pop();
    pop();

    return 0;
}
