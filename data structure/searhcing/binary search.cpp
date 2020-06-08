#include<iostream>

using namespace std;

int main()
{
    int first=0;
    int last=4;
    int a[5];
    int search_element;
    cout<<"Enter the element ";
    for(int i=0;i<=4;i++)
    {
        cin>>a[i];
    }

    int middle;

    middle=(first+last)/2;

    cout<<"Enter the element you want to search ";
    cin>>search_element;

    while(first<=last)
    {
         middle=(first+last)/2;
        if(a[middle]==search_element)
        {
            cout<<"Element is found ";
            break;
        }
        if(a[middle]>search_element)
        {
            last=middle-1;

        }
        else if(a[middle]<search_element)
        {
            first=middle+1;
        }

        else
        {
            cout<<"Element was not found ";
        }

        if(first>last)
        {
            cout<<"Element was not found ";
        }
    }
    return 0;
}
