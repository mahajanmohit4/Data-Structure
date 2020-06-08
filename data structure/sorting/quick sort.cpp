#include<iostream>

using namespace std;

int partition(int a[],int lb,int up)
{
    int pivot=a[lb];
    int start=lb;
    int end=up;

    while(start<end)
    {
        while(a[start]<=pivot)
        {
            start++;
        }
        while(a[end]>pivot)
        {
            end--;
        }
        if(start<end)
        {
            int temp=a[start];
            a[start]=a[end];
            a[end]=temp;
        }
            int t=a[lb];
            a[lb]=a[end];
            a[end]=t;

            return end;
    }
}

quick(int a[],int lb,int up)
{
    if(lb<up)
    {
    int loc=partition(a,lb,up);
    quick(a,lb,up-1);
    quick(a,lb+1,up);
    }

}

int main()
{
    int a[33],n;
    cout<<"Enter the element you want : ";
    cin>>n;

    cout<<"Enter the element : ";

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    quick(a,0,n);

    cout<<"sorted element : ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
    return 0;
}

