#include<stdio.h>
int main()
{
    int a,b,c,d,e,i,g;
    for(;;)
    {scanf("%d %d",&a,&b);
    if(a==0&&b==0)break;
    c=b-a;
    d=c;
    d=d%100;
    d=d%50;
     d=d%20  ;
     d=d%10;
     d=d%5;
     d=d%2;

      if(d==0)printf("possible\n");
      else printf("impossible\n") ;


    }
    return 0;
}
