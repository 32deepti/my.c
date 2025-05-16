#include<stdio.h>
struct student
{
    char name[20];
    int roll;
    float marks;
};
int main()
{
struct student s1;
printf("enter the name of the student\n");
scanf("%s",&s1.name);
printf("enter the roll no of student\n");
scanf("%d",&s1.roll);
printf("enter the marks of the student\n");
scanf("%f",&s1.marks);
printf("student details\n");
printf("name:%s\n,roll:%d\n,marks:%f",s1.name,s1.roll,s1.marks);
}
