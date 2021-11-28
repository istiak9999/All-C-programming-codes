#include <stdio.h>

int main() {
int a,b,c,d;
scanf("%d %d %d",&a,&b,&c);
if(a==0)a=24;
d=a+b+c;
if(d==24)printf("0\n");
else if(d>24)printf("%d\n",d-24);
else printf("%d\n",d);
    return 0;
}
