#include<stdio.h>
struct student
{
    char name[50];
    int roll;
    float marks;
};
int main()
{
    struct student s[3];
    float total=0;
    for(int i=0;i<3;i++)
    {
     printf("enter the name,roll,marks of the student %d:",i+1);
     scanf("%s %d %f",s[i].name,&s[i].roll,&s[i].marks);
     total+=s[i].marks;
    }
        printf("Average marks :%.2f\n",total/3);
    return 0;
}
