#include <stdio.h>
#include<math.h>
int main() {

float a,b,c,d,e;
while(scanf("%f",&a)!='0')
{
    if (a==0)break;
    scanf("%f %f",&b,&c);
    d=(((a*b)/c)*100);
    e=sqrt(d);
    printf("%d\n",(int)e);

}

    return 0;
}
