#include<stdio.h>
int mmain()
{
    int n,r,sum=0,tmp;



    scanf("%d",&n);

    while(n>0)
{
    r=n%10;
    sum=sum*10+r;
    n=n/10;




}
n=tmp ;
if (n==sum)
    printf("palindrome");


    return 0;
}
