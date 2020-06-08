//insertion sort

#include<iostream>

using namespace std;

int main()
{
    int a[55];

    int i,j,temp,n;

    cout<<"how many element you want : ";
    cin>>n;
    cout<<"Enter the element : ";
    for(int m=0;m<n ;m++)
    {
        cin>>a[m];
    }


    cout<<"Sorted element are : ";
    for(i=1; i<5 ;i++)
    {
        temp=a[i];
        j=i-1;

        while(j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }

    for(int k=0;k<5;k++)
    {
        cout<<a[k]<<endl;
    }

    return 0;
}
