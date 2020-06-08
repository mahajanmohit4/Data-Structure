#include<iostream>

using namespace std;

int main()
{
    int a[]={33,11,55,22,44};
    int min;

    for(int i=0 ; i<4 ; i++)
    {
        min=i;

        for(int j=i ; j<5; j++)
        {
            if(a[min]>a[j])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            int temp = a[min];
            a[min] = a[i];
            a[i] = temp;
        }
    }

    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<endl;
    }

    return 0;
}
