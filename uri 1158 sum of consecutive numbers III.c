#include<stdio.h>
int main()
{
    int a,x,y,i,j;

   scanf("%d",&a);
   for(i=0;i<a;i++)
   {
       scanf("%d %d",&x,&y);

       if(x%2==0)
       {
           int sum=0;
           for(j=x+1;j<=(x+(2*y));j+=2)
           {
               sum=sum+j;


           }

           printf("%d\n",sum);

       }
       else
            {
                int sum=0;
           for(j=x ;j<=(x+(2*(y-1)));j+=2)
           {
               sum=sum+j;


           }

           printf("%d\n",sum);

       }



   }



    return 0;
}
