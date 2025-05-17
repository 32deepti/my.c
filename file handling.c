#include<stdio.h>
int main()
{
FILE*fopen("data.txt","w");
if(fp==NULL)
{
    printf("error opening file!\n");
    return 1;
}
fprintf(fp,"Hello,File Handling!\n");
fclosec(fp);
printf("data written to file successfully.\n");
return 0;
}
