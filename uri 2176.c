#include<stdio.h>
#include<string.h>

int main()
{ int lan,a=0,b,c,i;
    char bit[120];
    gets(bit);

    for(i=0;bit[i];i++)
    {
if(bit[i]=='1')a++;

    }
  if(a%2==0)printf("%s0\n",bit);
    else
       printf("%s1\n",bit);



    return 0;
}
