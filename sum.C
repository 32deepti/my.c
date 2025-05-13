#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("sum:%d\n",a+b);
    printf("difference:%d\n",a-b);
    printf("product:%d\n",a*b);
    if(b!=0)
    printf("quotient:%d\n",a/b);
    else
    printf("division is not possible\n");
    return 0;
}
