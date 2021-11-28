#include<stdio.h>
int main()

{
    int tc,i;
    double a,b,c,d,e,f;
    scanf("%d",&tc);
    for(i=0;i<tc;i++)
    {
        scanf("%lf %lf %lf %lf",&a,&b,&c,&d);


       int count=0;
       while(a<=b)
       {
            a *= (c / 100.0) + 1.0;
            b *= (d/ 100.0) + 1.0;
           count++;
        if (count>100)
        {


            printf("Mais de 1 seculo.\n");
            break;
        }

       }
       if (count<=100)

              printf("%d anos.\n",count);



    }



    return 0;

}
