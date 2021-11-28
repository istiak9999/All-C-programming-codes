#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int i,sum=0,j,z[10];
    for(i=1;i<=a;i++)
    {
        for(j=0;j<10;j++)
        {
            scanf("%d",&z[j]);
            sum=sum+z[j];

        }

       if(sum==0)
        printf("case %d:yes ",i);

        else
        printf("case %d:no ",i);

    }






    return 0;
}
