#include<stdio.h>
int main()
{

    int n,p,i,j,k,m,f;
    int a[p];
    char c;
    scanf("%d",&n);


  for(i=0;i<n;i++)
    {
        scanf("%d",&p);
        for(j=0;j<p;j++)
        {
            scanf("%d",&a[j]);
        }
            scanf("%c",&c);
        if(c=="M")
        {  m=a[0];
                 for(k=1;k<p;k++)
        {
            m+=a[k];
        }
         printf("%d\n",m);
        }
        else if (c=="F")
        {   f=a[0];
               for(k=1;j<k;k++)
        {
            f-=a[k];
        }
            printf("%d\n",f);
        }

    }
    return 0;
}
