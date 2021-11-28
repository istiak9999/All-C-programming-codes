#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int n[x],i,pos,smallest,a;
    for(i=0;i<x;i++)
   {scanf("%d",&n[i]);

   }
    smallest=n[0];
    pos=1;
       for(i=1;i<x;i++)
       {
           if(smallest>n[i])
           {
               smallest=n[i];
               pos=i;

           }



       }

    printf("Menor valor: %d\nPosicao: %d\n",smallest,pos);


return 0;
}
