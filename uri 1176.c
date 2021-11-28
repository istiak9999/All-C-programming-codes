#include<stdio.h>
int main()
{
    int i,j,t;
    long long int answer,n;
    scanf("%d",&t);
   for(i=0;i<t;i++)
   {scanf("%lld",&n);
  answer= kaj(n);
printf("Fib(%lld) = %lld\n",n,answer);

    }


    return 0;
}
   kaj(long long int x)
    {long long int first=0,second=1,next;

      int j,y;
      if(x<=1)
      {
          return x;

      }
      else{
      y=x+1;
      for(j=0;j<y;j++)
      {
          next=first+second;
          first=second;
          second=next;

      }
    return next;}


    }
