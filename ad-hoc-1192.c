#include<stdio.h>
int main()
{
    int i,tc,a,b;
    char c;
    scanf("%d",&tc);
    for(i=1;i<=tc;i++)
    {
      scanf("%d%c%d",&a,&c,&b);
    if(c>='A' &&c<='Z' && a==b )
        printf("%d\n",a*b);
        else if(c>='A' &&c<='Z' && a!=b )
          printf("%d\n",b-a);
                  else if(c>='a' &&c<='z' && a==b )
          printf("%d\n",a*b);
                else if(c>='a'&&c<='z' && a!=b )
          printf("%d\n",a+b);

    }







    return 0;
}
