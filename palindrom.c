#include<stdio.h>
int main()
{
    int num,remainder,reverse=0,original;
    printf("enter the integer:");
    scanf("%d",&num);
    original=num;
    while(num!=0)
    {
    remainder=num%10;
    reverse=reverse*10+remainder;
    num/=10;
}
if(original==reverse)
{
    printf("%d is a palindrome number.");
}
    else
    {
     printf("%d is not palindrom number.");
    }
    return 0;
}


