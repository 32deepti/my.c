#include<stdio.h>
struct Employee
{
    char name;
    int age;
    float salary;
};
int main()
{
    struct Employee emp[2];
    for(int i=0;i<2;i++)
    printf("enter the details of the Employee\n");
    printf("enter the name of the Employee\n");
    scanf("%s",&emp[i].name);
    printf("enter the age of the Employee\n");
    scanf("%d",&emp[i].age);
    printf("enter the salary of the Employee\n");
    scanf("%f",&emp[i].salary);
    printf("%s.name,%d.age,%f.salary",emp[i].name,emp[i].age,emp[i].salary);
}
