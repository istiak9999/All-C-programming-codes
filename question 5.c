#include<stdio.h>
int main()
{
int n,m,s=0,a,r=0,t;
printf("The number is: ");
scanf("%d",&a);
n=a;
while(n>0)
{
m=n%10;
s=s+m;
n=n/10;
}

n=s;
  while (n != 0)
  {
    r = r * 10;
    r = r + n%10;
    n = n/10;
  }
t=s*r;
printf("\nSum of digits; %d",s);
printf("\nReversing the summation; %d",r);

printf("\nSum of digits*Reverse of Summation; %d",t);



    return 0;
}
