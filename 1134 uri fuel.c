#include <stdio.h>
int main ()
{
    int a,m=0,d=0,g=0,i=1;
    for(i=1;i>0;i++)
    {
        scanf("%d",&a);
        if(a==1)
            m++;
        else if(a==2)
            g++;
        else if(a==3)
        d++;
        else if (a==4)
        break;

    }
    printf("MUITO OBRIGADO\nAlcool:%d\nGasolina:%d\nDiesel:%d\n",m,g,d);



return 0;
}
