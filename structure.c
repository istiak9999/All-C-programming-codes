#include<stdio.h>
int main ()
{ int i;
    struct student
    {
    int roll;
    char name[100];
    int number;


    }; struct student s[10];
    for(i=1;i<=10;i++)
    {
        printf("enter roll:");
        scanf("%d",&s[i].roll);
         printf("enter name:");
         scanf("%s",&s[i].name);
          printf("enter number:");
        scanf("%d",&s[i].number);
    }

    for(i=1;i<=10;i++)
    {
        printf("roll=%d",s[i].roll);
        printf("%s",s[i].name);
        printf("%d",s[i].number);





    }


    return 0;


}
