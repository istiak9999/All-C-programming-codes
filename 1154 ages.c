#include<stdio.h>
int main()
{
    int a,i;
    double avr,b=0,s=0;
    for(i=1;i>0;i++)
    {
        scanf("%d",&a);
        if (a<0) break;
        else{
           s=s+a;
           b++;
        }

    }

    avr=s/b;
    printf("%.2lf\n",avr);



    return 0;
}
