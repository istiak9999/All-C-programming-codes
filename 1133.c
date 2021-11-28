#include<stdio.h>
int main()
{
    int a,b,i,temp;
    scanf("%d %d",&a,&b);
     if(b<a)
     {temp =a;
         a=b;
         b=temp;}
         for(i=a+1;i<b;i++)
         {
             if (i%5==2||i%5==3)
                printf("%d\n",i);


         }
         float t=9.928273;
         int v=(int)t;
         printf("%d\n",v);


    return 0;
}
