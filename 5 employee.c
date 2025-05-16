#include<stdio.h>
struct Employee
{
    char name[50];
    int id;
    float salary;
};
int main()
{
    struct Employee emp[5];
    for(int i=0;i<5;i++)
    {
     printf("enter the name,id,and salary of the Employee %d:",i+1);
     scanf("%s %d %f",emp[i].name,&emp[i].id,&emp[i].salary);
    }
    for(int i=0;i<5;i++)
    {
        printf("name: %s,id: %d,salary: %.2f\n",emp[i].name,emp[i].id,emp[i].salary);
    }
    return 0;
}
