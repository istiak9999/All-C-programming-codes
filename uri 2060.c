#include<stdio.h>
int main()
{
    int test,a=0,b=0,c=0,d=0,i,t;
    scanf("%d",&test);

    for(i=0;i<test;i++)
    {
        scanf("%d",&t);
        if(t%2==0)a++;
         if(t%3==0)b++;
       if(t%4==0)c++;
       if(t%5==0)d++;

    }
printf("%d Multiplo(s) de 2\n",a);
printf("%d Multiplo(s) de 3\n",b);
printf("%d Multiplo(s) de 4\n",c);
printf("%d Multiplo(s) de 5\n",d);

    return 0;
}
