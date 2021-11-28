#include<stdio.h>
int main ()

{
    int i,j=0;
    double a,b[2],avr;
    for(i=0;i<100;i++)
    {
        scanf("%lf",&a);
        if(a>=0 && a<=10)
        {
            b[j]=a;
            j++;
        }
        else
            printf("nota invalida\n");
        if (j>1) break;
        }
        avr=(b[0]+b[1])/2;
        printf("media = %.2lf\n",avr);



    return 0;
}
