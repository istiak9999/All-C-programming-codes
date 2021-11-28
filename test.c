#include <stdio.h>
int main()
{

    int n,np,i,j,k,m,f;
    int a[np];
    char c;
    scanf("%d",&n);
 for(i=0;i<n;i++)
    {
        scanf("%d",&np);
        for(j=0;j<np;j++)
        {
            scanf("%d",&a[j]);
        }


        scanf("%c",&c);


        if(c=='M')
        {  m=a[0];
                 for(k=1;k<np;k++)
        {
            m+=a[k];
        }
         printf("%d/n",m);
        }
        else if (c=='F')
        {   f=a[0];
               for(k=1;k<np;k++)
        {
            f-=a[k];
        }
            printf("%d/n",f);
        }

    }
    return 0;


 return 0;
}

