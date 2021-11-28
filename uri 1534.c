#include<stdio.h>
int main()
{
    int i,j,k,l,m,n,a[72][72];
while(scanf("%d",&n)!=EOF)
{
    k=n-1;;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)a[i][j]=1;


           else a[i][j]=3;
                     if (j==k)a[i][j]=2;
        }k--;
    }

     for(i=0;i<n;i++)
     {

         for(j=0;j<n;j++)
         {
             printf("%d",a[i][j]);

         }printf("\n");

     }

    }

    return 0;
}
