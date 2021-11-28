#include<stdio.h>
int main()
{
    int i,x,y,t;
    double d;
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
    scanf("%d %d",&x,&y);
        if(y==0)
   {

    printf("divisao impossivel\n");
   }
          else{
            d=x/(y*1.00);
           printf("%.1lf\n",d);}

    }

    return 0;
}
