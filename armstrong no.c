#include<stdio.h>
#include<math.h>
int main()
{
    int num,remainder,result=0,original;
    printf("enter the integer:");
    scanf("%d",&num);
    original=num;
    while(num!=0)
    {
    remainder=num%10;
    result+=remainder*remainder*remainder;
    num/=10;
}
if(result==original)
    printf("%d is a armstrong number.");
    else
     printf("%d is not a armstrong number.");
    return 0;
}


