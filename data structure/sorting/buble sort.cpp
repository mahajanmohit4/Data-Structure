#include<iostream>

using namespace std;

int main()
{
    int a[5]={30,20,50,10,40};

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp;
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    for(int i=0;i<=4;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}
