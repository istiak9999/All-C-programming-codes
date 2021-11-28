#include<stdio.h>
int main ()
{
    int p=5,i;
    for(i=0;i<10;i++)
    {
        p+=2;
    printf("%d\n",p++);
    }
       printf("%p\n",&p);
    return 0;


}
