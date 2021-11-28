#include<stdio.h>
int main()
{
    int i,a,sum=0;
    scanf("%d",&a);
    for(i=2; i<=a;i++)
    {
        if (a%i==0)
           sum++;
        break;
    }
if (sum==0)
    printf("prime");
else
printf("composite");



    return 0;
}
