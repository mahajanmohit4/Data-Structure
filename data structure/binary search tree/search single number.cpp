#include<iostream>

using namespace std;

int main()
{
    int arr[5]={10,34,55,12,9};
    int a,count=0,d;
    cout<<"Enter the search element ";
    cin>>a;

    for(int i=0; i<5;i++)
    {
        if(arr[i]==a)
        {
           count++;
            d=i;
        }

    }
    if(count>=1)
    {
        cout<<"Element was found "<<"Index number :"<<d;
    }
   else
   {
        cout<<"Element was not found ";
   }
    return 0;
}
