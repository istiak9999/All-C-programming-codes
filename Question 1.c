#include<stdio.h>
int main()
{ int a ,b;
printf("Co-ordinate point:");
scanf("%d%d",&a,&b);
if(a>-1&&b>-1)
    printf("The co-ordinate point (%d,%d) lies in the First quadrant\n",a,b);
else if(b>-1&&a<0)
    printf("The co-ordinate point (%d,%d) lies in the Second quadrant\n",a,b);
    else if(a<0&&b<1)
    printf("The co-ordinate point (%d,%d) lies in the Third quadrant\n",a,b);
    else if(a>-1&&b<0)
    printf("The co-ordinate point (%d,%d) lies in the first quadrant\n",a,b);



return 0;

}
