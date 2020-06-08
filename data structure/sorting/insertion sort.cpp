#include<iostream>

using namespace std;

int main()
{
    int a[5];

    cout<<"Enter the numbers : ";
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }

    for(int i=4;i>=0;i--)
    {
        for(int j=0;j<=i;j++)
        {
            if(a[i]<a[j])
            {
                int temp;
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    for(int i=0;i<=4;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}
