#include <stdio.h>
int main()

{
int i,j,t,n;
scanf("%d",&t);
for(i=0;i<t;i++)
{int count=0;
scanf("%d",&n);
for(j=2;j<n;j++)
{
    if(n%j==0)
        count++;

}
if (count==0)
    printf("%d eh primo\n",n);
else
   printf("%d nao eh primo\n",n);
count=0;

}



    return 0;

}
