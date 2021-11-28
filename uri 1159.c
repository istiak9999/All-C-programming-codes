#include<stdio.h>
int main()
{
    int x,i,j;


   for(i=1;i>0;i++)
   {
       scanf("%d",&x);
       if(x==0) break;

       else if(x%2==0)
       {
           int sum=0;
           for(j=x;j<=(x+(2*4));j+=2)
           {
               sum=sum+j;


           }

           printf("%d\n",sum);

       }
       else
            {
                int sum=0;
           for(j=x+1 ;j<=((x+1)+(2*4));j+=2)
           {
               sum=sum+j;


           }

           printf("%d\n",sum);

       }



   }



    return 0;
}

