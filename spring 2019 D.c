#include<stdio.h>
int main()
{int n,i,count=0;
scanf("%d",&n);
double a,sum=0,avr;
for(i=1;i<=n;i++)
{scanf("%lf",&a);
if(a>=0)
  {sum=sum+a;
  count++;}

}
if (count<2)
printf("too few numbers\n");
else
{avr=sum/count;
printf("%.2lf\n",avr);}


return 0;

}
