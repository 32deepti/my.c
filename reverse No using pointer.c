#include<stdio.h>
int main()
{
    int arr[10]={10,20,30,40,50},n=5,i;
    int *start,*end,temp;
    start=arr;
    end=arr+n-1;
    while(start<end)
    {
        temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
