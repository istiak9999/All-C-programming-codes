#include<stdio.h>
int main()
{
    int i,j,k,l,m,n,o;
    for(;;)
    {
        scanf("%d",&n);
        if(n==0)break;
        int arr[n][n];

        for(i=0;i<n;i++)
        {
                  for(j=0;j<n;j++)
        {
            arr[i][j]=1;

        }


        }
              for(i=0;i<n;i++)
        {
                  for(j=0;j<n;j++)
        {
          if (j==0) printf("%3d",arr[i][j]);
          else printf(" %3d",arr[i][j]);

        }printf("\n");


        }printf("\n");


    }


    return 0;
}
