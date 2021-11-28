#include<stdio.h>
#include<math.h>
int main()
{
    double x,y,ans,a;
    scanf("%lf",&a);
    x=(1+sqrt(5))/2;
      y=(1-sqrt(5))/2;
    ans=(pow(x,a)-pow(y,a))/sqrt(5);
    printf("%.1lf\n",ans);

    return 0;
}
