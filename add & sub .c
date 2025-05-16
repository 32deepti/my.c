#include<stdio.h>
struct complex
{
    float real,imag;
};
int main()
{
    struct complex a={3.2,2.1}, b={1.1,0.9},sum,diff;
    sum.real=a.real+b.real;
    sum.imag=a.imag+b.imag;
    diff.real=a.real+b.real;
    diff.imag=a.imag+b.imag;
    printf("sum=%.2f+%.2fi\n",sum.real,sum.imag);
    printf("difference=%.2f+%.2fi\n", diff.real,diff.imag);
    return 0;
}
