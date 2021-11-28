#include<stdio.h>
#include<math.h>
int main()
{
    int x1,x2,y1,y2,v1,r1,r2;
    float r,dis,d,x,y;
   while( scanf("%d %d %d %d %d %d %d",&x1,&y1,&x2,&y2,&v1,&r1,&r2)!=EOF){
    x=(x2-x1)*(x2-x1);
    y=(y2-y1)*(y2-y1);
    d=sqrt(x+y);
 dis= d+(1.5*v1);
    r=r1+r2;
    if(dis>r)printf("N\n");
    else printf("Y\n");


   }


    return 0;
}
