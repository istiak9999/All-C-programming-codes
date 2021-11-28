#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,i,sum=0;
    scanf("%d",&b);

    for(c=0;c<b;c++){
    scanf("%d",&a);

    for(sum=0,i=1;i<=a;i++)
    {
        sum+=1;
        i++;
        if(i>a)break;
        sum-=1;

    }

printf("%d\n",sum);
    }

return 0;
}
