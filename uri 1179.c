#include<stdio.h>
int main ()

{
    int impar[5],par[5],i,a,j,p=0,im=0,c1=0,c2=0,cp1=0,cp2=0;
    for(i=0;i<15;i++)
    {
        scanf("%d",&a);
        if(a%2==0)
        {
          par[p]=a;
            p++;
            c1++;
            if(p==5)
            { for(j=0;j<5;j++)

                 {
                     printf("par[%d] = %d\n",j,par[j]);

                 }
               cp1++;
               p=0;
            }
        }
        else
        {
          impar[im]=a;
            im++;
            c2++;
            if(im==5)
            { for(j=0;j<5;j++)

                 {
                     printf("impar[%d] = %d\n",j,impar[j]);

                 }
                 cp2++;
               im=0;
            }
        }



    }
    for(i=0;i<(c2-(cp2*5));i++)

                 {
                     printf("impar[%d] = %d\n",i,impar[i]);

                 }
          for(i=0;i<(c1-(cp1*5));i++)

                 {
                     printf("par[%d] = %d\n",i,par[i]);

                 }

    return 0;


}
