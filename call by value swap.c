#include<stdio.h>
#include<string.h>
int main()
{
    int a=5,b=10;
    int temp;
    printf("before swap\n");
    printf("a=%d,b=%d\n",a,b);
     temp=a;
    a=b;
    b=temp;
    printf("after swap\n");
    printf("a=%d,b=%d",a,b);
    return 0;
}
