#include<iostream>

using namespace std;

int main()
{
    int temp,i,j,k;
    int mini,index;

   int a[]={40,30,20,10,50};
    for(int i=0;i<=5;i++)
    {
        mini=a[i];
        for(int j=i+1 ;j<=4;j++)
        {
            if(a[j]<mini)
            {
                mini=a[j];
               // index=j;
            }
            for(int j=0;j<=4;j++)
            {
                if(a[j]==mini)
                {
                     index=j;
                }

            }
            temp=a[i];
            a[i]=a[index];
            a[index]=temp;
        }
    }

    for(int i=0;i<5;
    i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}
