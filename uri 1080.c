#include<stdio.h>
int main()
{int i,j,a[100];
for(i=0;i<100;i++)
{
    scanf("%d",a[i]);
}
 for(i=0;i<100;i++)
{
    for(j=0;j<100;j++)
    {
      if (a[i]>a[j])
            printf("%d\n%d",a[i],i+1);
      return 0;

    }


}
}
