#include<stdio.h>
int main()
{
    int i,x[10],v,a;
    scanf("%d",&v);
    x[0]=v;
    for(i=1;i<10;i++)
    {  a=x[i-1];
      x[i]=a*2;
    }

      for(i=0;i<10;i++)
    {
        printf("N[%d] = %d\n",i,x[i]);
    }



return 0;
}

