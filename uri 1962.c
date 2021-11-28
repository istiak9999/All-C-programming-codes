#include<stdio.h>
int main()
{
    int test,year,a,b;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d",&year);
     if(year<2015)
    {
        a=2015-year;
        printf("%d D.C.\n",a);
    }
    else
    {
                a=year-2014;
        printf("%d A.C.\n",a);


    }


    }


    return 0;

}
