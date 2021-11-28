#include<stdio.h>
int main()
{
    int i,count=0,c=0,a;
    float b,d,s=0;
    for(i=1;i>0;i++)
    {

        scanf("%f",&d);
        if(d<0 || d>10)
        {

            printf("nota invalida\n");

        }
        else
        {
            s+=d;
            count++;
            c++;
            if (count==2)
            {
             printf("media = %.2f\n",s/2);
             count=0;
             s=0;

          }


        if (c%2==0)
        {
           printf("novo calculo (1-sim 2-nao)\n") ;
           scanf("%d",&a);
           while (a<1 || a>2)
           {
               printf("novo calculo (1-sim 2-nao)\n") ;
                          scanf("%d",&a);
           }
          if(a==2)
           {return 0;}
           else
            continue;





        }
        }
    }


    return 0;
}

