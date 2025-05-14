#include<stdio.h>
int main()
{
    int n,i,arr[n],sum=0;
    printf("enter the number of array elements");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[n]);
    sum+=arr[n];
    }
    printf("%d",sum);
    
}
