#include<stdio.h>
int main()
{
    int r,a[20],k,i,j,l,m,sum=0;
    scanf("%d",&r);

    for(i=1;i<r;i++)
    {
        for(j=0;j<20;j++)
        {
            scanf("%d",a[j]);

        }
printf(" ");
        scanf("%d",&k);

        int b[k];
        for(l=0;l<k;l++)
        {
            scanf("%d",b[l]);
        }
        for(j=0;j<20;j++)
        {
              for(l=0;l<k;l++)
               {
                   if(a[j]==b[l])
                   {
                       sum=0+b[l];
                   }

               }

        }
printf("Round #%d:%d\n",i,sum);
    }
    return 0;
}
