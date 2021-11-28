#include<stdio.h>
void main()

{
    int n,flag=0;
    scanf("%d",&n);
    flag=check(n);
    if (flag==0)
     printf("Prime number");
    else
    printf("Not prime");
}

int check(int n)
{
int i;
for(i=2;i<=n/2;i++)
{
    if(n%2!=0)
        continue;
    else
        return 1;


}
return 0;
}
