#include<stdio.h>
void ReverseArray(int arr[],int start,int end)
{
    while(start<end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
void PrintArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
}
void rotation(int arr[],int d, int n)
{
    if(d==0)
    return;
    d=d%n;
    ReverseArray(arr,0,d-1);
    ReverseArray(arr,d,n-1);
    ReverseArray(arr,0,n-1);
}
int main()
{
int arr[]={1,2,3,4,5,6,7};
int n=sizeof(arr)/sizeof(arr[0]);
int d=2;
rotation(arr,d,n);
PrintArray(arr,n);
return 0;
}

    