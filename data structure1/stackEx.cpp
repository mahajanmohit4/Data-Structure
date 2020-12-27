#include<iostream>
using namespace std;

/*Stack
first in first out
insert -> push
delete -> pop
*/

int arr[5];
int static count;
 
 
void push(int i)
{
    if(count>=5){
        cout<<"Stack is full !!"<<endl;
    }
    else if(count<5)
        arr[count++] = i;
}

void pop()
{
    if(count==-1)
        cout<<"Stack is empty !!"<<endl;
    else if(count>=0)
        --count;
}

void show()
{
    for(int i=0; i<count; i++){
        cout<<arr[i]<<endl;
    }
    
}
int main()
{

   cout<<""





    show();
    return 0;
}