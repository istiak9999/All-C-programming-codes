#include<stdio.h>
int main()
{ int n,m,i,even=0,odd=0;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    scanf("%d",&m);
    if(m%2==0)
      even++ ;
    else
odd++;
}

    printf("%d\n%d\n",even,odd);

    return 0;
}
