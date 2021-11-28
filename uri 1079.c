#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    double b,c,d;

    for(i=0;i<a;i++)
    {
       scanf("%lf %lf %lf",&b,&c,&d);
        double med = ((b/10) * 2) + ((c/10) * 3) + ((d/10) * 5);

       printf("%.1f\n",med);

    }




    return 0;
}

